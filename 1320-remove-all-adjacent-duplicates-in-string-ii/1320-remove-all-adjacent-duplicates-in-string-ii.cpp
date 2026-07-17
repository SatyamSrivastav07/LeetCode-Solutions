class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>> st;
        string res = "";

        for (int i = 0; i < s.size(); i++) {
            if (st.empty() || s[i] != st.top().first) {
                st.push({s[i], 1});
            } else {
                st.top().second++;
                if (st.top().second == k) {
                    st.pop();
                }
            }
        }

        while (!st.empty()) {
            res = string(st.top().second, st.top().first) + res;
            st.pop();
        }

        return res;
    }
};