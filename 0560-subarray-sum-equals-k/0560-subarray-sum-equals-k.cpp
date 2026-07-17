class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n= nums.size();
        vector<int> prefix;
        int currSum=0;
        int cnt=0;
        map<int,int> mpp;
        mpp[0]=1;
        for(int i=0;i<n;i++){
            currSum+=nums[i];
            int rem=currSum-k;
            cnt+=mpp[rem];
            mpp[currSum]+=1;
        }
        return cnt;
        
    }
};