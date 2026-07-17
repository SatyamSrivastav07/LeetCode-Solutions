class Solution {
public:
    string thousandSeparator(int n) {
        if(n==0) return "0";
        string ans = "";
        vector<string> s;
        while(n){
            s.push_back(to_string(n%10));
            n/=10;
        }
        if(s.size()>3){
            for(int i=0;i<s.size();i++){ 
                ans += s[i];
                if((i+1)%3==0 && (i+1) < s.size()) ans += ".";
            }
        }
        else for(int i=0;i<s.size();i++) ans += s[i];
        reverse(ans.begin(), ans.end());
        return ans;
    }
};