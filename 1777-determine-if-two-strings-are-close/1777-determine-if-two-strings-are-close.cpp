class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size())  return false;
        vector<int> vec1(26,0);
        vector<int> vec2(26,0);
        for(int i=0;i<word1.size();i++) {
            vec1[word1[i]-'a']++;
            vec2[word2[i]-'a']++;
        }
        for(int i=0;i<vec1.size();i++) {
            if((vec1[i]>0 && vec2[i]>0) || (vec1[i]==0 && vec2[i]==0 ))    continue;
            else return false;
        }
        sort(vec1.begin(),vec1.end(),greater<int>());
        sort(vec2.begin(),vec2.end(),greater<int>());
        return vec1==vec2;
    }
};