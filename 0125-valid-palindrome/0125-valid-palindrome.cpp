class Solution {
public:
bool ispalind(vector<char> arr)
{
    int n=arr.size();
    int flag = 0;
    for (int i = 0; i <= n / 2 && n != 0; i++) {
        if (arr[i] != arr[n - i - 1]) {
            flag = 1;
            break;
        }
    }
 
    if (flag == 1)
        return 0;
    else
        return 1;
}
    bool isPalindrome(string s) {
        stack<char> st;
        vector<char> temp;
        for(int i=0;i<s.size();i++){
            if(s[i]>=65 && s[i]<=90){
                s[i]=s[i]+32;
                st.push(s[i]);
            }
            else if(s[i]>=97 && s[i]<=122 || s[i]>=48 && s[i]<=57 ){
                st.push(s[i]);
            }
            else    continue;
            
        }
        while(!st.empty()){
                temp.push_back(st.top());st.pop();
            }
            if(ispalind(temp))  return true;
            return false;
    }
};