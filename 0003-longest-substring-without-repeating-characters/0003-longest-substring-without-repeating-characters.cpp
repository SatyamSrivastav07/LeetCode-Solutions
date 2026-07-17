class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charSet;
        int maxLength = 0;
        int i = 0, j = 0;

        while (j < s.length()) {
            if (charSet.find(s[j]) == charSet.end()) {
                charSet.insert(s[j]);
                j++;
                maxLength = max(maxLength, j - i);
            } else {
                charSet.erase(s[i]);
                i++;
            }
        }

        return maxLength;
    }
};