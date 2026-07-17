// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//        sort(nums.begin(),nums.end(),greater<int>());
//        long long sum=0,i=0;
//        while(nums[i]!=0){
//            sum+=nums[i];
//            i++;
//        } 
//        return sum;
//     }
// };
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=nums[0];
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            
            ans=max(ans,sum);
            if(sum<0){
                sum=0;
            }
        }
        return ans;
        
    }
};