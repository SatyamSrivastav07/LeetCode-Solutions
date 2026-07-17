class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        stack<char> tt;
        for(int  i=0;i<s.size();i++){
            if(s[i]=='#')  {
                if(st.empty())  continue;
                else    st.pop();

            } 
            else    st.push(s[i]);
        }
        for(int j=0;j<t.size();j++){
            if(t[j]=='#')
            {  if(tt.empty())  continue;
                else    tt.pop();
            }
            else    tt.push(t[j]);
        }
        if(st==tt)  return true;
        return false;

        
    }
};