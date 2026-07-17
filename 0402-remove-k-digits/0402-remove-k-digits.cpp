class Solution {
public:
    string removeKdigits(string num, int k) {
        string s = "";
        for (char &c : num) {
            while (k > 0 && !s.empty() && s.back() > c) {
                s.pop_back();
                k--;
            }
            s.push_back(c);
        }
        // Remove remaining k digits from the end
        while (k > 0 && !s.empty()) {
            s.pop_back();
            k--;
        }
        // Remove leading zeros
        int nonZeroIndex = 0;
        while (nonZeroIndex < s.size() && s[nonZeroIndex] == '0') {
            nonZeroIndex++;
        }
        s = s.substr(nonZeroIndex);
        // If string is empty, return "0"
        if (s.empty()) return "0";
        return s;
    }
};