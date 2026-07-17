class Solution {
public:
    int maxScore(string s) {
        int one = 0, zero = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1')
                one++;
            else
                zero++;
        }
        int ans = 0;
        for (int i = 1; i < s.size(); i++) {
            int ones = 0, zeroes = 0;  // Reset ones and zeroes here
            for (int j = 0; j < i; j++) {
                if (s[j] == '1')
                    ones++;
                else
                    zeroes++;
            }
            ans = max(zeroes + one - ones, ans);
        }
        return ans;
    }
};
