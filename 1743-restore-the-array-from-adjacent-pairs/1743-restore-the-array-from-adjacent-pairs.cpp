class Solution {
public:
    vector<int> ans;

    void dfs(int origin, unordered_map<int, bool>& vis,
             unordered_map<int, vector<int>>& adj) {


        vis[origin] = true;

        for (auto neigh : adj[origin]) {
            if (vis[neigh] == true)
                continue;

            ans.push_back(neigh);
            dfs(neigh, vis, adj);
        }
    }
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        unordered_map<int, int> mp;

        unordered_map<int, bool> vis;

        unordered_map<int, vector<int>> adj;

        for (int i = 0; i < adjacentPairs.size(); i++) {
            int x = adjacentPairs[i][0];
            int y = adjacentPairs[i][1];

            mp[x]++;
            mp[y]++;

            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        int origin;

        for (int i = 0; i < adjacentPairs.size(); i++) {
            int x = adjacentPairs[i][0];
            int y = adjacentPairs[i][1];

            if (mp[x] == 1) {
                origin = x;
                break;
            }
            if (mp[y] == 1) {
                origin = y;
                break;
            }
        }
        ans.push_back(origin);
        dfs(origin, vis, adj);

        return ans;
    }
};