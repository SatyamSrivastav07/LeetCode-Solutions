class Solution {
public:
    int minOperations(vector<int>& v) {
        map<int,int>mp;
        for(auto i:v){
            mp[i]++;
        }
        int ans=0;
        for(auto i:mp){
            if(i.second<2)  return -1;
            ans+=((i.second+2)/3);    
        }
        return ans;
    }
};