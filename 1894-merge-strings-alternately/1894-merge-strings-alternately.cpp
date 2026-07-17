class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=min(word1.length(),word2.length());
        string ans="";
        for(int i=0;i<n;i++){
            ans=ans+word1[i]+word2[i];
        }
        ans=ans+word1.substr(n,word1.length())+word2.substr(n,word2.length());
        return ans;  
        
    }
};