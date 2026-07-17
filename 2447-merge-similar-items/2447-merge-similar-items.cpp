
class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int,int>m;
        vector<vector<int>>ans;

        for(auto a : items1){
            m[a[0]] += a[1];
        }
        for(auto a : items2){
            m[a[0]] +=a[1];
        }
        for(auto i : m){
            ans.push_back({i.first,i.second});
        }
    return ans;
    }
};