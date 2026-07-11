class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> preMax(n);
        vector<int> sufMin(n);

        preMax[0] = nums[0];
        sufMin[n-1] = nums[n-1];

        for ( int i = 1; i < n; i++ ){
            preMax[i] = max(nums[i],preMax[i-1]);
        }

        for ( int i = n-2; i >= 0; i--){
            sufMin[i] = min(nums[i], sufMin[i+1]);
        }

        int res = 0;
        int ans = n;

        for ( int i =0; i < n; i++ ){
            res = preMax[i] - sufMin[i];
            if ( res <= k ){
                ans = min(ans, i);
            }
        }
        return ans == n ? -1 : ans;
    }
};