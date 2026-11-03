class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans = 0;
        int max_val = *std::max_element(nums.begin(), nums.end());
        for (int num : nums)
            ans += abs(max_val- num);
        return ans;
    }
};