// class Solution {
// public:
//     int calPoints(vector<string>& operations) {
//         stack<int> st;
//         int ans=0;
//         for(int i=0;i<operations.size();i++){
          
//             if(operations[i]=="C"){
//                 st.pop();
//             }
//             if(operations[i]=="D"){
//                 int ne=st.top();
//                 st.pop();
//                 st.push(2*ne);
//             }
//             if(operations[i]=="+"){
//                 int a=st.top();
//                 st.pop();
//                 int b=st.top();
//                 st.pop();
//                 st.push(a+b); 
//             }
//             else{
//                 st.push(stoi(operations[i]));
//             }
//         }
//         while(!st.empty()){
//             ans+=st.top();
//             st.pop();
//         }
//         return ans;
//     }
// };
class Solution {
public:
    int calPoints(vector<string>& o) {
        stack<int> s;
        for(int i = 0; i < o.size();i++){
            
            
                if(o[i] == "+"){
                    int x = s.top();
                    s.pop();
                    int y = s.top();
                    s.push(x);
                    s.push(x+y);
                }
                else if(o[i] == "C"){
                    s.pop();
                }
                else if(o[i] == "D"){
                    s.push(2*s.top());
                }
                else{
                    s.push(stoi(o[i]));
                }
            }
        
        int sum = 0;
        while(!s.empty()){
            sum += s.top();
            s.pop();
        }
        return sum;
    }
};