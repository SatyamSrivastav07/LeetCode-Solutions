class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        unordered_map<int, long long> freq;
        int n = nums.size();
        long long ans = 0;
        int left = 0;
        long long count = 0;

        for (int right = 0; right < n; ++right) {
            count += freq[nums[right]]++;
            while (count >= k) {
                ans += n - right; 
                freq[nums[left]]--;
                count -= freq[nums[left]];
                left++;
            }
        }

        return ans;
    }
};
