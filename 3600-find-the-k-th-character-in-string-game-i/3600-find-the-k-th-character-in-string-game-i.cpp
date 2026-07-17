class Solution {
    void solve(int k,string &s){
        if(s.length()>=k){
            return;
        }
        string t ="";
        for(int i=0;i<s.size();i++){
            t += s[i]+1;
        }
        s+=t;
        solve(k,s);
        
    }


public:
    char kthCharacter(int k) {
        string s="a";
        solve(k, s);
        return s[k-1];
     
    }
};