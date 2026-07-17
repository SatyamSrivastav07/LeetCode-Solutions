class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>maxi){
                maxi=nums[i];
            }
        }
        int sz=maxi+n+1;
        vector<int> freq(sz,0);
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        int ans=0;
        for(int i=0;i<sz;i++){
            if(freq[i]>1){
                freq[i+1]+=(freq[i]-1);
                ans+=(freq[i]-1);
            }
            
        }
        return ans;
    }
};