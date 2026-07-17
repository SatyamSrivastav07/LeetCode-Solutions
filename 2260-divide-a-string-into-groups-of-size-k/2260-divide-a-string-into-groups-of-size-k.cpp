class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        int rem = s.size() % k;
        if (rem != 0) {
            int to_add = k - rem;
            s += string(to_add, fill);
        }
        for (int i = 0; i < s.size(); i += k) {
            ans.push_back(s.substr(i, k));
        }

        return ans;
    }
};