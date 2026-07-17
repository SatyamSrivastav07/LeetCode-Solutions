class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {

        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;

            for (int j = i; j < nums.size(); j++) {
                sum += nums[j];
                ans.push_back(sum);
            }
        }
        sort(ans.begin(), ans.end());

        int res = 0;
        int mod = 1e9 + 7;

        for (int i = left - 1; i <= right - 1; i++) {
            res = (res + ans[i]) % mod;
        }
        return res;
    }
};