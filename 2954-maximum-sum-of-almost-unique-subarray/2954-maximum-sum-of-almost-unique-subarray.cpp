#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    long long maxSum(std::vector<int>& nums, int m, int k) {
        int start = 0, end = 0;
        long long curr_sum = 0;
        long long ans = 0;
        std::unordered_map<int, int> freq_map;

        for (; end < k; end++) {
            curr_sum += nums[end];
            freq_map[nums[end]]++;
        }
        if (freq_map.size() >= m) {
            ans = curr_sum;
        }

        while (end < nums.size()) {
            freq_map[nums[start]]--;
            if (freq_map[nums[start]] == 0) {
                freq_map.erase(nums[start]);
            }
            curr_sum -= nums[start];
            start++;
            curr_sum += nums[end];
            freq_map[nums[end]]++;
            end++;

            if (freq_map.size() >= m) {
                ans = std::max(ans, curr_sum);
            }
        }

        return ans;
    }
};
