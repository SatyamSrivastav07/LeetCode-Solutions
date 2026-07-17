class Solution {
public:
    int sumUptoN(int n){ return n*(n+1)/2; }
    int maximizeSum(vector<int>& nums, int k) {
        int ans=0;
        sort(nums.begin(),nums.end(),greater<int>());
        int n=nums[0];
        return sumUptoN(n+k-1) - sumUptoN(n-1);

    }
};