class Solution {
public:
    void dfs(int sr, int sc, vector<vector<int>>& ans,
             vector<vector<int>> image, int iniColor, int color,
             vector<int> delRow, vector<int> delCol, int n, int m) {

        ans[sr][sc] = color;
        for (int i = 0; i < 4; i++) {
            int newRow = sr + delRow[i];
            int newCol = sc + delCol[i];
            if (newRow >= 0 && newCol >= 0 && newRow < n && newCol < m &&
                image[newRow][newCol] == iniColor && ans[newRow][newCol] != color) {
                dfs(newRow, newCol, ans, image, iniColor, color, delRow, delCol,
                    n, m);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        vector<vector<int>> ans = image;
        int iniColor = image[sr][sc];
        int n = image.size(), m = image[0].size();
        vector<int> delRow = {-1, 0, 1, 0};
        vector<int> delCol = {0, 1, 0, -1};
        dfs(sr, sc, ans, image, iniColor, color, delRow, delCol, n, m);
        return ans;
    }
};