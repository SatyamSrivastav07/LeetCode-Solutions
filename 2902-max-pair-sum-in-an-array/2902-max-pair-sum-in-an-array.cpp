class Solution {
public:
    int maxSum(vector<int>& nums) 
    {
        int maxi=-1,n=nums.size(),j=0;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            v[j++]=findLargeDigit(nums[i]);
        }    
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(v[i]==v[j])
                {
                    maxi=max(maxi,nums[i]+nums[j]);
                }
            }
        }
        return maxi;
    }
    int findLargeDigit(int num)
    {
        int res=0;
        while(num)
        {
            int rem=num%10;
            res=max(res,rem);
            num/=10;
        }
        return res;
    }
};