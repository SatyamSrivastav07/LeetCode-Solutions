class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        stack<int> st;
        int count=0;
        sort(s.begin(),s.end(),greater<int>());
        sort(g.begin(),g.end());
        for(int i=0;i<s.size();i++){
            st.push(s[i]);
        }
        for(int i=0;i<g.size();i++){
            while(!st.empty()){
                if(g[i]<=st.top()){
                    count++;
                    st.pop();
                    break;
                }
                else st.pop();
            }
           
        }
        return count;
    }
};