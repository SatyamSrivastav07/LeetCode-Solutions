class Solution {
public:
    int maximumLength(string s) {
        map<string,int> mp;
       for (int i = 0; i < s.size(); i++) {
        for (int j = 1; j <= s.size() - i; j++){
            string x=s.substr(i, j);
            mp[x]++;
        }
       }
        int ans=0;
        for(auto i: mp){
        
            set<char> st;
            for(auto k:i.first) st.insert(k);
            if(i.second>=3&&st.size()==1) {
                
                int x=i.first.size();
                
                ans=max(ans,x);
            }
        }
        if(ans==0) return -1;
        return ans;
    }
};