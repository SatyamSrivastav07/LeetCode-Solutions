// class Solution {
// public:
//     int countSetBits(int n) {
//         int count = 0;
//         while (n > 0) {
//             count += n & 1;
//             n >>= 1;
//         }
//         return count;
//     }

//     int sumIndicesWithKSetBits(vector<int>& nums, int k) {
//         int ans = 0;
//         for (int i = 0; i < nums.size(); i++) {
//             if (countSetBits(nums[i]) == k) {
//                 ans += nums[i];
//             }
//         }
//         return ans;
//     }
// };
class Solution {
public:
    int countSetBits(int n) {
        int count = 0;
        while (n > 0) {
            count += n & 1;
            n >>= 1;
        }
        return count;
    }
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (countSetBits(i) == k) {
                sum += nums[i];
            }
        }
        return sum;   
    }
};