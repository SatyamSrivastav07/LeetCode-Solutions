class Solution {
public:
    string smallestPalindrome(string s) {
        unordered_map<char, int> mp;
        for (char c : s) {
            mp[c]++;
        }

        string left = "", mid = "", right = "";

        for (char i = 'a'; i <= 'z'; i++) {
            if (mp[i] % 2 == 1) {
                
                    mid = i;  
                
                mp[i]--;
            }
            left += string(mp[i] / 2, i);
        }

        right = left;
        reverse(right.begin(), right.end());

        return left + mid + right;
    }
};
