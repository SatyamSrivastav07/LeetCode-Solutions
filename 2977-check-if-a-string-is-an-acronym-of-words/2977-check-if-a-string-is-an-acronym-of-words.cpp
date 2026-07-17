class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string ans="";
        string temp;
        for(int i=0;i<words.size();i++){
            temp=words[i];
            ans+=temp[0];
        }
    
    return(s==ans);    
    }
};