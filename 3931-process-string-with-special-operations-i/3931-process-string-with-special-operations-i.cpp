class Solution {
public:
    string processStr(string s) {
        string ch = "";
        string st = "";

        for ( int i = 0; i < s.size(); i++ ){
            if ( s[i] >= 'a' && s[i] <= 'z' ){
                ch = ch + s[i];
            }
            else if ( s[i] == '*' ){
                st = ch.substr(0, ch.size() - 1);
                ch = st;
            }
            else if ( s[i] == '#' ){
                ch = ch + ch;
            }
            else if ( s[i] == '%' ){
                reverse(ch.begin(),ch.end());
            }
        } 
        return ch;
    }
};