class Solution {
public:
    static bool sortcol(const vector<int>& v1, const vector<int>& v2) {
        return v1[1] < v2[1];
    }

    int findMinArrowShots(vector<vector<int>>& points) {
        if (points.empty()) return 0;

        // Sort by end point of the intervals
        sort(points.begin(), points.end(), sortcol);

        // Debug: print sorted points
        for (const auto& point : points) {
            for (int val : point)
                cout << val << " ";
            cout << endl;
        }

        int ans = 1;
        int last_end = points[0][1];
        
        for (int i = 1; i < points.size(); ++i) {
            if (points[i][0] > last_end) {
                ++ans;
                last_end = points[i][1];
            }
        }
        
        return ans;
    }
};
