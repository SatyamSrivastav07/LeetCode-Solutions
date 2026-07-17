class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int i = 0;
        int j = 0;
        int n = str1.size();
        int m = str2.size();
        while(i<n && j<m) {
            if(str1[i]+1==str2[j] || str1[i]==str2[j]){
                j++;
                i++;
        }
        else if(str1[i]=='z' and str2[j] == 'a'){
            j++;
            i++;
        }
        else    i++;
        }
            
        return j==m; 
        
    }
};