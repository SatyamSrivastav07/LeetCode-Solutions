class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_map<char,int> mp;
        for (char c : brokenLetters) {
            mp[c]++;
        }
        
        int isBroken = 0;
        int ans = 0;
        for (int i = 0; i < text.size(); i++) {
            if (text[i] == ' ' || i == text.size() - 1) {
                if (i == text.size() - 1 && mp[text[i]]) {
                    isBroken = 1;
                }
                if (!isBroken) ans++;   
                isBroken = 0;
            } else {
                if (mp[text[i]]) isBroken = 1;
            }
        }
        return ans;
    }
};
