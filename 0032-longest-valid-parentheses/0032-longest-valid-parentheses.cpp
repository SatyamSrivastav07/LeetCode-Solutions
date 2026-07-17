#include <stack>
#include <string>
#include <algorithm>

class Solution {
public:
    int longestValidParentheses(std::string s) {
        std::stack<int> st;
        st.push(-1); // Push -1 to represent the index before the valid substring
        int max_len = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push(i);
            } else { // s[i] == ')'
                st.pop();
                if (st.empty()) {
                    st.push(i); // Push current index as the new starting point
                } else {
                    max_len = std::max(max_len, i - st.top());
                }
            }
        }
        return max_len;
    }
};
