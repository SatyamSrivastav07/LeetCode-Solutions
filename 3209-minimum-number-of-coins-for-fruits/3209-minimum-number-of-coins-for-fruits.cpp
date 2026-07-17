class Solution {
private:
public:
    int helper(int idx, int i, vector<int> &prices, int discount, vector<vector<int>> &dp)
    {
        if(idx > i)
            return 1e8;
        if(idx == i)
            return 0;
        if(dp[idx][discount] != -1)
            return dp[idx][discount];
        if(discount)
           return dp[idx][discount] = min(prices[idx]+helper(idx+1, i, prices, idx+1, dp), helper(idx+1, i, prices, discount-1, dp));
        return dp[idx][discount] = prices[idx] + helper(idx+1, i, prices, idx+1, dp);
    }
    int minimumCoins(vector<int>& prices) {
        int i = prices.size();
        vector<vector<int>> dp(i+1, vector<int> (i+1, -1));
        return helper(0, i, prices, 0, dp);
    }
};