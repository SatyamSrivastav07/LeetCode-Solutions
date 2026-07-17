class Solution {
    public:
        vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
                ios_base::sync_with_stdio(false);
                        cin.tie(NULL);
                                cout.tie(NULL);
                                        int r=grid.size(), c=grid[0].size();
                                                vector<int>rOnes(r,0), cOnes(c,0);
                                                        for(int i=0; i<r; i++)
                                                                    for(int j=0; j<c; j++)
                                                                                    if(grid[i][j] == 1)
                                                                                                        rOnes[i]++, cOnes[j]++;

                                                                                                                for(int i=0; i<r; i++)
                                                                                                                            for(int j=0; j<c; j++)
                                                                                                                                            grid[i][j] = 2*(rOnes[i] + cOnes[j]) - r - c;
                                                                                                                                                    
                                                                                                                                                            return grid;
                                                                                                                                                                }
                                                                                                                                                                };
