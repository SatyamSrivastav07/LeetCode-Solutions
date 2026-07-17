class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ans;
        for ( int i= 0; i < queries.size(); i++ ){
            int pC = 0;

                int x1 = queries[i][0];
                int y1 = queries[i][1];

                int r  = queries[i][2];

                for ( int m = 0; m < points.size(); m++ ){
                        int x2 = points[m][0];
                        int y2 = points[m][1];

                        float dis = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

                        

                        if ( dis <= r ){
                            pC++;
                        }
                        else{
                            continue;
                        }
                    
            
                
            }
            ans.push_back(pC);
        }
        return ans;
    }
};