class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]<=nums[i]){
                while(nums[i+1]<=nums[i]){
                    nums[i+1]++;
                    ans++;
                }
            }
        }
        return ans;
    }
};