class Solution {
public:
    string largestGoodInteger(string num) {
        string ans="0";
        for(int i=0;i<=num.size()-3;i++){
            string x=num.substr(i,3);
            unordered_set<char>s(x.begin(),x.end());
            if(s.size()==1){
                if(stoi(x)>=stoi(ans)) ans=x;
            }
        }
        return ans=="0"?"":ans;
    }
};