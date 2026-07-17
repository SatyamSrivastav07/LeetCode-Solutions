class Solution {
public:
    int helper(int n) {
        int ans = 0;
        while (n) {
            ans += n % 10;
            n = n / 10;
        }
        return ans;
    }

    int countLargestGroup(int n) {
        std::map<int, int> mp;
        int sum_dig = 0;
        
        for (int i = 1; i <= n; i++) {  // Start from 1
            sum_dig = helper(i);
            mp[sum_dig]++;
        }
        
        int maxCount = 0;
        for (const auto& pair : mp) {
            if (pair.second > maxCount) {
                maxCount = pair.second;
            }
        }
        
        int count = 0;
        for (const auto& pair : mp) {
            if (pair.second == maxCount) {
                count++;
            }
        }
        
        return count;
    }
};