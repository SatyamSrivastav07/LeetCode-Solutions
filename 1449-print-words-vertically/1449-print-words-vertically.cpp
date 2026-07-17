class Solution {
public:
    vector<string> printVertically(string s) {
        s += " ";

        vector<string> words, ans;
        string str = "";
        int maxi = 0;

        for (char ch : s) {
            if (ch == ' ') {
                words.push_back(str);
                maxi = max(maxi, (int)str.size());
                str = "";
            } else {
                str += ch;
            }
        }

        for (int i = 0; i < maxi; i++) {
            str = "";

            for (string &word : words) {
                if (i < word.size())
                    str += word[i];
                else
                    str += ' ';
            }

            while (!str.empty() && str.back() == ' ')
                str.pop_back();

            ans.push_back(str);
        }

        return ans;
    }
};