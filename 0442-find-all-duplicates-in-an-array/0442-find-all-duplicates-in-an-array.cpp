class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i = 0; i<nums.size(); i++){
            int val = abs(nums[i]);
            if(nums[val-1]<0) ans.push_back(val);
            nums[val-1]*=-1;
        }
        return ans;
    }
};