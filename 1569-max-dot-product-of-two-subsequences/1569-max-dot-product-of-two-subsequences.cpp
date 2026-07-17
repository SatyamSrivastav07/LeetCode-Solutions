class Solution
{
    public:
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) 
    {
        int m=nums1.size(),n=nums2.size();
        vector<vector<int>> dp(m,vector<int> (n,0));
        dp[m-1][n-1]=nums1[m-1]*nums2[n-1];
        for(int i=m-2;i>=0;i--)
            dp[i][n-1]=max(nums1[i]*nums2[n-1],dp[i+1][n-1]);
        for(int i=n-2;i>=0;i--)
            dp[m-1][i]=max(nums2[i]*nums1[m-1],dp[m-1][i+1]);
        for(int i=m-2;i>=0;i--)
        {
            for(int j=n-2;j>=0;j--)
            {
                int a=nums1[i]*nums2[j]+dp[i+1][j+1];
                int b=nums2[j]*nums1[i];
                int c=dp[i+1][j+1];
                int d=dp[i+1][j];
                int e=dp[i][j+1];
                dp[i][j]=max({a,b,c,d,e});
            }
        }
        return dp[0][0];
    }
};