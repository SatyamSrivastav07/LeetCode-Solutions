class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum > 9 * num)
            return "";
        string ans = "";
        while (ans.size() != num) {
            int curr = 0;
            curr = min(9, sum);
            ans += char('0' + curr);
            sum -= curr;
        }
        return ans;
    }
};