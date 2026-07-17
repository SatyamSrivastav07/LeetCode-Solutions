// class Solution {
// public:
//     vector<int> shortestToChar(string s, char c) {
//         vector<int> vec;
       
//         int ans=0;
//         for(int i=0;i<s.size();i++){
//             if(s[i]==c){
//                 vec.push_back(i);
//             }
//         }
//          vector<int> answer(s.length());
//         for(int i=0;i<s.size();i++){
//             for(int j=0;j<vec.size();j++){
//                 ans= min(ans,abs(vec[j]-i));
               
//             }
//              answer.push_back(ans);
//         }
//         return answer;
//     }
// };
class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>ispresent;
        for(int i=0;i<s.length();i++){
            if(s[i]==c)ispresent.push_back(i);
        }
        vector<int>ans(s.length());
        for(int i=0;i<s.length();i++){
            if(s[i]==c){
                ans[i]=0;
            }
            else{
                int val=INT_MAX;
                for(int k=0;k<ispresent.size();k++){
                    val=min(val,abs(i-ispresent[k]));
                }
                ans[i]=val;
            }
        }
        return ans;
    }
};