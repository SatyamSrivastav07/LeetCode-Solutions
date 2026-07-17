class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int ssum=accumulate(nums.begin(),nums.end(),0);
        if(x==ssum)  return nums.size();
        int reqsum=ssum-x;
        int s=0,e=0;
        int sum=0,ans=0;
        while(e<nums.size()) {
            sum+=nums[e];
            while(s<e && sum>reqsum ) sum-=nums[s++];
            if(reqsum == sum)
            {
                ans = max(ans,e-s+1);
            }
            e++;
        }  
    return ans == 0 ? -1: nums.size() - ans;
        
    }
};