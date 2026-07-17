class Solution {
public:
    int minimumLength(string s) {
        int n=s.size();
        if(n==0)    return 0;
        int i=0,j=n-1;
        while(i<j){
            if(s[i]==s[j]){
                while(s[i]==s[i+1] &&i<j){
                    i++;
                }
                while(s[j]==s[j-1] && i<j){
                    j--;
                }
                i++,j--;
                
            }
            else    break;
        }
        if(j-i+1<0) return 0; 
        return j-i+1;
    }
};