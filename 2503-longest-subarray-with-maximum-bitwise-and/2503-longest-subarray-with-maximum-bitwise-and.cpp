class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            maxi=max(nums[i],maxi);
        }
        int ans=1;
        int res=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1] && nums[i]==maxi){
                ans++;
                res=max(res,ans);
            }
            else    ans=1;
        }
        return res;
    }
};
