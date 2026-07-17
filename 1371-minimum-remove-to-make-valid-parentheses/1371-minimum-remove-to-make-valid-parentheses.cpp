class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string res = "";
        stack<char> st;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != '(' && s[i] != ')') {
                res.push_back(s[i]);
            } else {
                if (s[i] == ')') {
                    if (st.empty()) {
                        continue;
                    } else {
                        res.push_back(s[i]);
                        st.pop();
                    }
                } else {
                    res.push_back(s[i]);
                    st.push(s[i]);
                }
            }
        }
        if (!st.empty()) {
            for (int i = res.length() - 1; i >= 0; i--) {
                if (res[i] == '(' && !st.empty()) {
                    res.erase(res.begin() + i);
                    st.pop();
                }
            }
        }
        return res;
    }
};
