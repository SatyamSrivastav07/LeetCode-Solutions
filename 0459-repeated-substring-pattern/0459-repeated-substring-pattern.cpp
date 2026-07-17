class Solution {
public:
    bool repeatedSubstringPattern(string s) {
       string duplicates=s+s;
       return duplicates.substr(1,duplicates.length()-2).find(s)!= string::npos;
    }
};