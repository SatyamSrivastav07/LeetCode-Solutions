class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int n = points.size();
        
        vector<int> v;
        
        for(int i=0 ; i<n ; i++){
            v.push_back(points[i][0]);
        }
        
        sort(v.begin() , v.end());
        int maxx = 0;
        
        
        for(int i=1 ; i<n ; i++){
            maxx = max(maxx, v[i]-v[i-1] );
        }
        
        return maxx;
    }
};