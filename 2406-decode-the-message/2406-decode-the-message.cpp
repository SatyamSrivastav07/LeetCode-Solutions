class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char> m;
        string s="";
        int i=0;
        for(auto x:key)
        {
            if(x!=' ') 
            {
                if(!m[x])
                m[x]='a'+ i++;
            }           
        } 
        for(auto x:message) 
        {
            if(x==' ') s+=' ';
            else s+= m[x];
        }   
        return s;
    }
};