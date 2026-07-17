class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int start=0,mid=1,end=2;
        int ans=0;
        while(end<nums.size()){
            if((nums[start]+nums[end])*2==nums[mid]){
                ans++;
                cout<<mid<<endl;
            }
            end++,start++,mid++;
        }
        return ans;
    }
};