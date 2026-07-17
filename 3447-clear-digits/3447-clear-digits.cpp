class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;  
        
        for (char c : s) {
            if (isdigit(c)) {
                if (!st.empty() && !isdigit(st.top())) {
                    st.pop();  
                }
                
            } else {
                st.push(c); 
            }
        }
                string ans = "";
        while (!st.empty()) {
            ans = st.top() + ans;
            st.pop();
        }
        
        return ans;
    }
};
