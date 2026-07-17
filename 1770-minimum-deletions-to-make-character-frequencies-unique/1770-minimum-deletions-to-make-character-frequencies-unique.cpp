class Solution {
public:
    int minDeletions(string s) {
        map<char,int> mp;
        for(int i=0;i<s.size();i++) {
            mp[s[i]]++;
        }
        unordered_set<int> st;
        int ans=0;
        for(auto i : mp) {
            int temp=i.second;
            while(temp>0 && st.find(temp)!=st.end()) {
                temp--;
                ans++;
            }
            if(temp != 0){
                st.insert(temp);
            }
        }
    return ans;    
    }
    
};