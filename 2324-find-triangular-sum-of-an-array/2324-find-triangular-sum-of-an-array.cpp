class Solution {
public:
    int triangularSum(vector<int>& nums) {
        
            while(nums.size()!=1){
            vector<int> vec;
            for(int i=1;i<nums.size();i++){
                vec.push_back((nums[i] + nums[i-1]) % 10);
            }
            nums=vec;
        }
        return nums[0];
    }
};