class Solution {
public:
    int maxPower(string s) {
        int ans=0,cnt=1;
        for(int i=0;i<s.size();i++) {
            if(s[i]==s[i+1])    cnt++;
            else{
                cnt=1;
            }
            ans=max(ans,cnt);
        }
    return ans;    
        
    }
};