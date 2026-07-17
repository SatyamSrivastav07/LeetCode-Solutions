class Solution {
public:
    long long solve(int u, vector<vector<int>>& tree, vector<int>& time) {
        if (tree[u].empty()) {
            return time[u];
        }

        long long mn = LLONG_MAX;
        long long mx = 0;

        for (int v : tree[u]) {
            long long childTime = solve(v, tree, time);
            mn = min(mn, childTime);
            mx = max(mx, childTime);
        }

        long long duration = (mx - mn) + time[u];

        return mx + duration;
    }

    long long finishTime(int n, vector<vector<int>>& edges,
                         vector<int>& baseTime) {

        vector<vector<int>> tree(n);

        for (auto &edge : edges) {
            int parent = edge[0];
            int child = edge[1];
            tree[parent].push_back(child);
        }

        return solve(0, tree, baseTime);
    }
};