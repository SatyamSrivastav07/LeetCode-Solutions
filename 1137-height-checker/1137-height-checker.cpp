class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> replica(heights);
        int ans=0;
        sort(heights.begin(),heights.end());
        for( int i=0;i<heights.size();i++){
            if(replica[i]!=heights[i]){
                ans++;
            }
        }
        return ans;
    }
};