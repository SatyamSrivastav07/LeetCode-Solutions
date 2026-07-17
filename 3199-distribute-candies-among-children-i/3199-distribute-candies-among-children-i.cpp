class Solution {
public:
    long long calculateCombination(int n) {
        return 1LL * n * (n - 1) / 2;
    }
    int distributeCandies(int n, int limit) {
        if (n > 3 * limit) {
        return 0;
        }

        long long sol = calculateCombination(n + 2);
        if (n > limit) {
            sol -= 3 * calculateCombination(n - limit + 1);
        }
        if (n - 2 >= 2 * limit) {
        sol += 3 * calculateCombination(n - 2 * limit);
    }
    return sol;
        
    }
};