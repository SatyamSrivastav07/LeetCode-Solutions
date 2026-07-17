class Solution {
public:
    int minimumSum(vector<int>& nums) {        int n = nums.size();
        int sol = INT_MAX;
        vector<int> left(n, INT_MAX);
        vector<int> right(n, INT_MAX);
        for (int i = 1; i < n; i++) {
            left[i] = min(left[i - 1], nums[i - 1]);
         }
        for (int i = n - 2; i >= 0; i--) {
            right[i] = min(right[i + 1], nums[i + 1]);
        }
    for (int j = 1; j < n - 1; j++) {
        if (left[j] < nums[j] && right[j] < nums[j]) {
            sol = min(sol, left[j] + nums[j] + right[j]);
        }
    }

    if (sol == INT_MAX) {
        return -1;
    }

    return sol;
                                      }
};