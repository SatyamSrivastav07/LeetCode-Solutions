class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int total=0;
        for(int i=0;i<nums.size();i++){
            total^=nums[i];
        }
        total= total^k;
        int count =0;
        for (int i=0;i<32;i++){
            if(((1<<i)&total) !=0){
                count++;
            }
        }
        return count;
    }
};