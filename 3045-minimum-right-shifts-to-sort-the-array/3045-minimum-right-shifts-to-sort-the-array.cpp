class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> temp = nums;
        sort(temp.begin() , temp.end());
        
        if(nums == temp)    return 0;
        
        for (int ans = 1; ans < n; ++ans) {
            int end = nums[n - 1];
            for (int i = n - 1; i > 0; --i) {
                nums[i] = nums[i - 1];
            }
            nums[0] = end;

            
            if (nums == temp)   return ans;
        }
        return -1;
    }
};