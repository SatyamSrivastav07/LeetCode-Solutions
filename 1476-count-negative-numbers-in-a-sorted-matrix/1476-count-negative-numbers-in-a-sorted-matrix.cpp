class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans=0;
        int row=grid[0].size();
        int col=grid.size();
        for(int i=0;i<col;i++){
            for(int j=0;j<row;j++){
                if(grid[i][j]<0)    ans++;
            }
        }
        return ans;
    }
};