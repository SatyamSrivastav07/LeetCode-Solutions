class Solution {
public:
    string sortVowels(string s) {
        string vowel = "";
        int n = s.length();
        for (int i = 0; i < n; i++) {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' ||
                s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
                s[i] == 'o' || s[i] == 'u') {
                vowel.push_back(s[i]);
            }
        }
        sort(vowel.begin(), vowel.end());
        int a = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' ||
                s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
                s[i] == 'o' || s[i] == 'u') {
                s[i] = vowel[a];
                a++;
            }
        }
        return s;
    }
};