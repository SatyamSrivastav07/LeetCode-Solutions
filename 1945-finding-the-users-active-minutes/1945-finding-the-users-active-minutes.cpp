class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        map<int, set<int>> mp;

        for ( int i = 0 ;i < logs.size(); i++ ){
            int a = logs[i][0];
            int b = logs[i][1];

            mp[a].insert(b);
        }
        vector<int> ans(k, 0);

        for ( auto it : mp ){
            int idx = it.second.size();
            ans[idx - 1]++ ;

        }
        return ans;
    }
};