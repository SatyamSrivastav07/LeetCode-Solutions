class Solution {
public:
    int appendCharacters(string s, string t) {
        int ptr = 0; // Pointer for string s
        int i = 0;   // Pointer for string t

        // Traverse string s
        while (ptr < s.size()) {
            // Check if the current character in s matches the current character in t
            if (s[ptr] == t[i]) {
                i++; // Move to the next character in t
                // Debug statement to show the matched character
                cout << "Matched character: " << s[ptr] << ", Length of matched prefix in t: " << i << endl;
            }
            // Move to the next character in s
            ptr++;
        }

        // The number of characters to append to s to make t a subsequence
        return t.size() - i;
    }
};