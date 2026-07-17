class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans;
        vector<int> vec;
        if(original.size()!=n*m)    return ans;
        for(int i=0;i<original.size();i++){
            if((i+1)%n==0){
                vec.push_back(original[i]);
                ans.push_back(vec);
                vec={ };
            }
            else    vec.push_back(original[i]);
        }
        return ans;
    }
};