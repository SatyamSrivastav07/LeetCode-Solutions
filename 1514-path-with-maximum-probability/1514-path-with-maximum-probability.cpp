class Solution {
public:
    double maxProbability(
        int n,
        vector<vector<int>>& edges,
        vector<double>& succProb,
        int start_node,
        int end_node
    ) {
        vector<vector<pair<int, double>>> adj(n);

        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            double probability = succProb[i];

            adj[u].push_back({v, probability});
            adj[v].push_back({u, probability});
        }

        vector<double> best(n, 0.0);
        best[start_node] = 1.0;

        priority_queue<pair<double, int>> pq;
        pq.push({1.0, start_node});

        while (!pq.empty()) {
            double probability = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            if (probability < best[node]) {
                continue;
            }

            if (node == end_node) {
                return probability;
            }

            for (auto [next, edgeProbability] : adj[node]) {
                double newProbability =
                    probability * edgeProbability;

                if (newProbability > best[next]) {
                    best[next] = newProbability;
                    pq.push({newProbability, next});
                }
            }
        }

        return 0.0;
    }
};