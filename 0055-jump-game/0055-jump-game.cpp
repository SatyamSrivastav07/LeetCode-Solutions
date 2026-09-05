class Solution {
public:
    bool canJump(vector<int>& nums) {
        int jmp = 0;
        for (int i = 0; i < nums.size(); i++) {

            if (jmp < i)
                return false;

            if (jmp >= nums.size())
                return true;

            jmp = max(jmp, i + nums[i]);
        }
        return true;
    }
};