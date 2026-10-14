class Solution {
public:
    string smallestSubsequence(string s) {
        int n = s.size();
        stack<char> st;
        vector<bool> seen(26, false);
        vector<int> lastIndex(26, 0);
        for (int i = 0; i < n; i++) {
            int curr = s[i] - 'a';
            lastIndex[curr] = i;
        }
        for (int i = 0; i < n; i++) {
            int curr = s[i] - 'a';

            if (seen[curr]) {
                continue;
            }
            while (st.size() > 0 && st.top() > s[i] &&
                   i < lastIndex[st.top() - 'a']) {
                seen[st.top() - 'a'] = false;
                st.pop();
            }
            st.push(s[i]);
            seen[curr] = true;
        }
        string res = "";
        while (st.size() > 0) {
            res += st.top();
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};