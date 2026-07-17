class Solution {
public:

    int dfs(int x, int y, vector<vector<int>>& grid){
        if ( x < 0 || x >= grid.size() || y < 0 || y >= grid[0].size()) return 1;

        if ( grid[x][y] == 0 )  return 1;
        
        if(grid[x][y] == -1)
            return 0;

        grid[x][y] = -1;

        return dfs(x - 1, y, grid) + dfs(x + 1, y, grid) + dfs(x, y - 1, grid) + dfs(x, y + 1, grid);
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans = 0;
        for ( int i = 0; i < grid.size(); i++ ){
            for ( int j = 0; j < grid[0].size(); j++ ){
                if ( grid[i][j] == 1 ){
                    return dfs(i, j, grid);
                }
            }
        }
        return 0;
    }

};