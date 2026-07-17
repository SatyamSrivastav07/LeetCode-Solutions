class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        map<int,int> mp;

        for ( int i = 0; i < nums.size(); i++ ){
            mp[nums[i]]++;
        }

        for ( int i = 0; i < nums.size(); i++ ){
            for ( int j = i + 1;j < nums.size(); j++ ){
                if ( mp[nums[i]] != mp[nums[j]]){
                    return {nums[i],nums[j]};
                }
            }
        }
        return {-1,-1};
    }
};