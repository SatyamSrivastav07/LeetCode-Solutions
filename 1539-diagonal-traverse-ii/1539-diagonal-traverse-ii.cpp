class Solution {
    public:
        vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
                int row=nums.size();
                        vector<int>ans;
                                map<int, vector<int>>mp;
                                        for(int i=row-1;i>=0;i--){
                                                   int col=nums[i].size();
                                                              for(int j=0;j<col;j++)
                                                                         mp[i+j].push_back(nums[i][j]); 
                                                                                 }
                                                                                         for(auto &it:mp)
                                                                                                 {
                                                                                                             for(auto &val:it.second)
                                                                                                                         ans.push_back(val);
                                                                                                                                 }
                                                                                                                                         return ans;
                                                                                                                                             }
                                                                               };