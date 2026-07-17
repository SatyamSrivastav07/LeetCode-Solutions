class Solution {
public:
    int maxSubarrays(vector<int>& nums) {
         int x = INT_MAX;
        for(auto i:nums){
            x=x&i;
        }
        if(x!=0){
            return 1;
        }
        int a = INT_MAX;
        int ans=0;
        for(auto i:nums){
            a=a&i;
            
            if(a==x){
            
                ans++;
                
                a = INT_MAX;
            }
        } 
        
        return ans;
        
    }
};