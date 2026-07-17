class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long sum = 0;
        for ( int i = 0; i < nums.size(); i++ ){
            
            long long maxi = INT_MIN;
            long long mini = INT_MAX;

            for ( int j = i; j < nums.size(); j++){
                maxi = max(maxi, (long long)nums[j]);
                mini = min(mini, (long long)nums[j]);

                sum += (maxi-  mini);
            }
        }
        return sum;
    }
};