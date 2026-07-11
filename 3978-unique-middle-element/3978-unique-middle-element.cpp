class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for (int x : nums) {
            if (x == nums[n / 2]) {
                count++;
                if (count == 2)
                    return false;
            }
        }

        return true;
    }
};
