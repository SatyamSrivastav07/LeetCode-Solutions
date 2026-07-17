class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {

        vector<vector<string>> res;
        for (int i = 0; i < responses.size(); i++) {
            map<string,int> mp;
            vector<string> row;

            for (int j = 0; j < responses[i].size(); j++) {
                if (mp[responses[i][j]] == 0) {
                    row.push_back(responses[i][j]);
                    mp[responses[i][j]] = 1;
                }
            }

            res.push_back(row);
        }

        map<string,int> mp2;

        for (int i = 0; i < res.size(); i++) {
            for (int j = 0; j < res[i].size(); j++) {
                mp2[res[i][j]]++;
            }
        }

        int large = 0;
        string ans = "";

        for (auto it : mp2) {
            if (it.second > large) {
                large = it.second;
                ans = it.first;
            }
        }

        return ans;
    }
};