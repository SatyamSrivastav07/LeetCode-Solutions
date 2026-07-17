class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int n = searchWord.size();
        int ans = 1;
        int i = 0;

        while (i < sentence.size()) {
            int start = i;

            while (i < sentence.size() && sentence[i] != ' ') {
                i++;
            }

            if (sentence.substr(start, n) == searchWord) {
                return ans;
            }

            ans++;

            while (i < sentence.size() && sentence[i] == ' ') {
                i++;
            }
        }

        return -1;
    }
};
