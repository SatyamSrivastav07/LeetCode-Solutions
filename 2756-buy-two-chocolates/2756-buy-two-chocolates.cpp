class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end());
        int total = prices[0] + prices[1];
        return (money >= total) ? money - total : money;
    }
};  