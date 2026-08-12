class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
         int sz = 0;
        int j = 0;
        int n = nums.size();
        unordered_map<int,int> mp;
        
        int ans = 0;
       for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
            if(mp[nums[i]] > k)
            {
                while(j<i && mp[nums[i]] > k)
                {
                        mp[nums[j]]--;
                    j++;
                }
            }
            sz=i-j+1;
            ans = max(ans, sz);
            
        }
        
        return ans;
        }
};
