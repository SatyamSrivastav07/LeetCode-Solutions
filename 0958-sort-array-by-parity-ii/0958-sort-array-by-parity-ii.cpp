class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        vector<int> num(n,0);
        int even=0,odd=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2){
                num[odd]=nums[i];
                odd+=2;
            }
            else{
                num[even]=nums[i];
                even+=2;
            }
        }
        return num;
    }
};