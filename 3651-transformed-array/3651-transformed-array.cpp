class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        for(int i = 0; i < n; i++){
            if(nums[i] > 0) result[i] = nums[(i+abs(nums[i]))%n];
            else if(nums[i] < 0){
                int j = i, t = abs(nums[i]);
                while(t--) j = (j <= 0) ? n-1 : j-1;
                result[i] = nums[j];
            } else result[i] = nums[i];
        }
        return result;
    }
};