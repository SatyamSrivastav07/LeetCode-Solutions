class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if (s.size() != goal.size())
            return false;
        if (s == goal) {
            unordered_map<char, int> mp;
            for (int i = 0; i < s.size(); i++) {
                if (mp.find(s[i]) != mp.end()) {
                    return true;
                }
                mp[s[i]]++;
            }
            return false;
        }
        int mini = min(s.size(), goal.size());
        int ct = 0;
        int ct1 = 0;
        string a = "";
        string b = "";
        for (int i = 0; i < mini; i++) {
            if (s[i] != goal[i]) {
                a = a + s[i];
                b = b + goal[i];
                ct++;
            }
        }
        reverse(b.begin(), b.end());
        if (ct == 2 && a == b)
            return true;
        return false;
    }
};
