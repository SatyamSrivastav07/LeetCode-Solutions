// class Solution {
// public:
//     vector<int> findPeakGrid(vector<vector<int>>& mat) {
//         for(int i=1;i<mat[0].size()-1;i++){
//             for(int j=1;j<mat[i].size();j++) {
//                 if(mat[i][j]>mat[i-1][j-1]&&mat[i][j]>mat[i][j-1] && mat[i][j]>mat[i-1][j] && mat[i][j]>mat[i+1][j+1] && mat[i][j]>mat[i+1][j] && mat[i][j]>mat[i][j+1]){
//                     return {i,j};
//                 }
//             }
//         }
//     return {0,0};
//     }
// };
class Solution {
private: 
    bool isPeakElement(vector<vector<int>>& mat, int row, int col){
        int n = mat.size();
        int m = mat[0].size();
        int dxdy[][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
        for(int i=0; i<4; i++){
            int newrow = row + dxdy[i][0];
            int newcol = col + dxdy[i][1];
            if(newrow >= 0 && newcol >= 0 && newrow < n && newcol < m && mat[newrow][newcol] > mat[row][col]){
                return false;
            }
        }
        return true;
    }
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(isPeakElement(mat, i, j)){
                    return {i, j};
                }
            }
        }
        return {-1, -1};
    }
};
