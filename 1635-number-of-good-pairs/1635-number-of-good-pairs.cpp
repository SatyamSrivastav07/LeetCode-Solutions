class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) 
    {
        int count = 0;
        int n = nums.size();
        unordered_map<int, int> mp;     
        mp[nums[0]]++;
        for(int i=1; i<n; i++)
        {
            if( mp.find(nums[i]) != mp.end() )
            {
                count = count + mp[nums[i]];
            }
            mp[nums[i]]++;
        }
        return count;
    }
};