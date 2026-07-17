class Solution {
public:
    bool makeEqual(vector<string>& words) {
        if(words.size()==1) return true;
        unordered_map<char,int> mp;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                mp[words[i][j]]++;
            }
        }
             for (auto i : mp) 
                if(i.second%words.size()) return false;
    return true;

    }
};