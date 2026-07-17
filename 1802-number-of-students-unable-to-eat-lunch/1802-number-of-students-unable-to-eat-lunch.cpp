class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>q;
        stack<int>st;

        int cnt=0;

        for(int i=0; i<students.size(); i++)
        {
            q.push(students[i]);
        }
        for(int j=sandwiches.size()-1; j>=0; j--)
        {
        st.push(sandwiches[j]);
        }

        while(!st.empty() and cnt<q.size())
        {
            if(q.front()!=st.top()){
            q.push(q.front());
            q.pop();

            cnt++;
            }
            else
            {
                q.pop();
                st.pop();
                cnt=0;
            }   
        }

        return st.size();
    }
};