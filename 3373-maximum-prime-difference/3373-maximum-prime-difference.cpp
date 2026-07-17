class Solution {
public:
    vector<int> sieve(int n) {
        vector<bool> isPrime(n + 1, true);
        isPrime[0] = isPrime[1] = false;
        for (int i = 2; i * i <= n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        vector<int> ans;
        for (int i = 2; i <= n; i++) {
            if (isPrime[i]) {
                ans.push_back(i);
            }
        }
        return ans;
    }

    bool checkPrime(int n) { 
        if (n == 1)
            return false;
        if (n == 2)
            return true;
        if (n % 2 == 0)
            return false;
        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0)
                return false;
        }
        return true;
    }

    int maximumPrimeDifference(vector<int>& nums) {
        int first, second;
        for (int i = 0; i < nums.size(); i++) {
            if (checkPrime(nums[i])) {
                first = i;
                break;
            }
        }
        for (int i = nums.size() - 1; i >= 0; i--) {
           if (checkPrime(nums[i])) {
                second = i;
                break;
            }
        }
        return abs(second - first);
    }
};