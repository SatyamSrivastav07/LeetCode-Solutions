class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> vec(26,0);
        for(int i=0;i<s.size();i++){
            vec[s[i]-'a']++;
            vec[t[i]-'a']--;
        }
        int ans=0;
        for(int i=0;i<26;i++){
            if(vec[i]>0)   ans+=vec[i];
        }
        return ans;
    }
};