class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int i=0,ans=0;
        int j=tokens.size()-1;
        if(!tokens.size())  return 0;
        int sol=0;
        if(power<tokens[0]) return 0;
        while(i<=j ){
            if(power>=tokens[i]) {
                ans++;
                power-=tokens[i];
                i++;
                sol=max(ans,sol);
            }
            else{
                if(ans<=0)  return ans;
                power+=tokens[j];
                ans--;
                j--;
                sol=max(ans,sol);
            }
        
        }
        return sol;
    }
};