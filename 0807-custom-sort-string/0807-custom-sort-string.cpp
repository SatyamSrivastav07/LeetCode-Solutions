#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string customSortString(string order, string s) {
        vector<int> counts(26, 0); 
        for (char c : s) {
            counts[c - 'a']++;
        }
        string ans = "";
        for (char c : order) {
            int index = c - 'a';
            while (counts[index] > 0) {
                ans += c;
                counts[index]--;
            }
        }

        for (int i = 0; i < 26; i++) {
            while (counts[i] > 0) {
                ans += char('a' + i);
                counts[i]--;
            }
        }

        return ans;
    }
};
