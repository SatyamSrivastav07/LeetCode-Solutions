class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans = words.size();
        bool letter[26] = {};
        for (char c: allowed) 
            letter[c - 'a'] = true;
        for (string word: words) {
            for (char c: word){ 
                if (!letter[c - 'a']){
                    ans--;
                    break;
                }
            }
        }
        return ans;
    }
};