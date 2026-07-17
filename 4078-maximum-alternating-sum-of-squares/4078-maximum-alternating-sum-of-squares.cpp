class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            ans.push_back(nums[i] * nums[i]);
        }

        sort(ans.begin(), ans.end());

        long long sum = 0;
        long long sub = 0;

        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (i < n / 2) {
                sub += ans[i];
            } else {
                sum += ans[i];
            }
        }
        long long res = sum - sub;

        return res;
    }
};