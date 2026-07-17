
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start = 0, end = 0, ans = INT_MAX;
        long long sum = 0;
        while(end<nums.size()){
            sum += nums[end];
            if(sum>=target){
                while(sum>=target){
                    sum -= nums[start];
                    start++;
                }
                start--;
                sum += nums[start];
                ans = min(ans,end-start+1);
            }
            end++;
        }
        if(ans==INT_MAX) return 0;
        else return ans;
    }
};