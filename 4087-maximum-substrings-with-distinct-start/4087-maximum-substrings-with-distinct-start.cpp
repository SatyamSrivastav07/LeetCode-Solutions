class Solution {
public:
    int maxDistinct(string s) {
        unordered_map<char,bool>map;
        for(auto ch:s)
        {
            map[ch] = true;
        }
        return map.size();
    }
};