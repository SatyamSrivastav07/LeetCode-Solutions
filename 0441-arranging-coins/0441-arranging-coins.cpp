class Solution {
public:
    int arrangeCoins(int n) {
        for (int i = 1; i <= n; i++) {
            long long int x = (long long int)(i) * (i + 1) / 2; // Cast i to long long int
            if (x == n) return i;
            if (x > n) return i - 1;
        }
        return 0;
    }
};
