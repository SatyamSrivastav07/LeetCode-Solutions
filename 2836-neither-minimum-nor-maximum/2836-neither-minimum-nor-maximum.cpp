class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mini = nums[0];
        int n = nums.size();
        int maxi = nums[n-1];
        int ans = -1;
        for(int i = 0 ; i < n ; i++){
            if(nums[i]!=mini && nums[i]!=maxi){
                ans = nums[i];
                break;
            }
        }
        return ans;
        
    }
};