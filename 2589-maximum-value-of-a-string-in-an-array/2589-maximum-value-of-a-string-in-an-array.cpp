class Solution {
public:
    int maximumValue(vector<string>& strs) {
        bool ch=false;
        int cnt=0,ans=0;
        for(int i=0;i<strs.size();i++){
            cnt=0;
            ch=false;
            for(int j=0;j<strs[i].size();j++){
                if(strs[i][j]>=48 && strs[i][j]<=57){
                        cnt++;
                }    
                else{
                    cnt++;
                    ch=true;
                }    

            }
            if(ch){
                ans=max(ans,cnt);
            }
            else    ans=max(ans,stoi(strs[i]));
        }
        return ans;
    }
};