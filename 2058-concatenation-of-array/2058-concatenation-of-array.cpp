class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int m=nums.size();
        int n=2*m;
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            ans[i]=nums[i%m];
        }
        return ans;
    }
};