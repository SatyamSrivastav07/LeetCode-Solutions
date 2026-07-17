class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int currSum1 = nums[0];
        int maxSum = nums[0];
        int currSum2 = nums[0];
        int minSum = nums[0];

        int totalSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            totalSum += nums[i];

            currSum1 = max(nums[i], nums[i] + currSum1);
            maxSum = max(maxSum, currSum1);

            currSum2 = min(nums[i], nums[i] + currSum2);
            minSum = min(minSum, currSum2);
        }
        if (maxSum < 0) return maxSum;

        return max(maxSum, totalSum - minSum);
    }
};