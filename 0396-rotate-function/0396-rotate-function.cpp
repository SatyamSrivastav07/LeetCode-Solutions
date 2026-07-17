class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();
        int total_sum = accumulate(nums.begin(), nums.end(), 0);
        
        int prod = 0;
        for(int i = 0; i < n; i++){
            prod += nums[i] * i;
        }
        
        int ans = prod;
        

        for(int i=0;i<n;i++){
            prod= prod - nums[n-i-1]*(n-1) + total_sum - nums[n-i-1] ;
           
            ans=max(prod,ans); 
        }
        return ans;
    }
};