// class Solution {
// public:
//     int numIslands(vector<vector<char>>& grid) {
//         int n=grid[0].size();
//         int m=grid.size();
//         int water=0,land=0,ans=0;
//         for(int i=0;i<grid.size();i++){
//             for(int j=0;j<grid[i].size();j++){
//                 water=0,land=0;
//                 if(i==0 || j==0 || i==m-1 || j==n-1)    continue;
//                 else{
//                     if(grid[i][j]=='1'){
//                         if(grid[i][j+1]=='0'){
//                             land++;
//                         }
//                         else    water++;
//                         if(grid[i-1][j]=='0'){
//                             land++;
//                         }
//                         else    water++;
//                         if(grid[i+1][j]=='0'){
//                             land++;
//                         }
//                         else    water++;
//                         if(grid[i][j-1]=='0'){
//                             land++;
//                         }
//                         else    water++;

//                     }
//                     if(water==3 && land==1) ans++;
//                 }
                
//             }
//         }
//         return ans;
//     }
// };
class Solution {
public:
    void solve(int i, int j, vector<vector<char>> &grid){
        if(i < 0 || i > grid.size() - 1 || j < 0 || j > grid[0].size() - 1 || grid[i][j] == '*' || grid[i][j] == '0')
            return;

        grid[i][j] = '*';
        solve(i + 1, j, grid);
        solve(i - 1, j, grid);
        solve(i, j + 1, grid);
        solve(i, j - 1, grid);
    }

    int numIslands(vector<vector<char>>& grid) {
        int counter = 0;
        for(int i = 0; i < grid.size(); i++)
            for(int j = 0; j < grid[0].size(); j++)
                if(grid[i][j] == '1'){
                    counter++;
                    solve(i, j, grid);
                }

        return counter;
    }
};