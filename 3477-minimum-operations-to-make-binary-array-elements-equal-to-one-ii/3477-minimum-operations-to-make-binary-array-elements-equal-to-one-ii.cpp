class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans = 0;
        int target=1;
        for (int i=0;i<nums.size();i++){
            if (nums[i]!=target){
                ans++;
                target^=1; 
            }
        }

        return ans;
      }
};