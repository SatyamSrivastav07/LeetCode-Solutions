class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int area=0;
        float maxi=0;
        float curr_diagonal;
        for(int i=0;i<dimensions.size();i++){
                curr_diagonal=sqrt(dimensions[i][1]*dimensions[i][1] + dimensions[i][0]*dimensions[i][0]);
                if(curr_diagonal>maxi){
                    maxi=max(curr_diagonal,maxi);
                    area=dimensions[i][1]*dimensions[i][0];
                }
                if(curr_diagonal==maxi){
                    maxi=max(curr_diagonal,maxi);
                    area=max(area,dimensions[i][1]*dimensions[i][0]);
                }
        }
        return area;
    }
};