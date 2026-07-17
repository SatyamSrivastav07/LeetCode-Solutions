class Solution {
public:
    vector<bool> sieve(int n) {
        vector<bool> isPrime(n + 1, true);
        isPrime[0] = isPrime[1] = false;
        for (int i = 2; i * i <= n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= n; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        return isPrime;
    }

    vector<int> closestPrimes(int left, int right) {
        vector<bool> isPrime = sieve(right); // Precompute primes
        vector<int> arr;
        
        for (int i = max(2, left); i <= right; i++) {
            if (isPrime[i]) arr.push_back(i);
        }

        if (arr.size() < 2) return {-1, -1}; // No prime pair found

        int mini = INT_MAX;
        vector<int> ans(2, -1);

        for (int i = 0; i < arr.size() - 1; i++) {
            if (arr[i + 1] - arr[i] < mini) {
                mini = arr[i + 1] - arr[i];
                ans = {arr[i], arr[i + 1]};
            }
        }
        return ans;
    }
};
