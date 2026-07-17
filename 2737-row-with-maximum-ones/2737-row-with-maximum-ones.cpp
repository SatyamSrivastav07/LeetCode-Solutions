class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int ind=0,ans=0,kount=0;
        for(int i=0;i<mat.size();i++) {
            kount=0;
            for(int j=0;j<mat[i].size();j++) {
                if(mat[i][j]==1)    kount++;
            }
            cout<<kount<<" ";
            if(kount>ans){
                ans=kount;
                ind=i;
            }
        }
        return {ind,ans};
    }
};