class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        int count=0;
        long long sum=0;
        for(int i=0;i<nums.size() && sum<n;i++){
            if(nums[i]>sum+1){
                count++;
                sum+=(sum+1);
                i--;
            } else{
                sum+=nums[i];
            }
        }
        while(sum<n){
            count++;
            sum+=(sum+1);  
        }
    return count;       
    }
};
