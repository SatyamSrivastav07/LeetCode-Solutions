class Solution {
public:
    int characterReplacement(string s, int k) {

        int ans = 0;

        for(char i = 'A'; i <= 'Z'; i++) {

            int start = 0, end = 0, count = 0, swap = k;

            while(end < s.size()) {

                if(s[end] == i)
                    count++;

                else if(swap > 0) {
                    swap--;
                    count++;
                }

                else {

                    if(s[start] == i) {
                        count--;
                    }
                    else {
                        count--;
                        swap++;
                    }

                    start++;
                    continue;
                }

                ans = max(ans, count);
                end++;
            }
        }

        return ans;
    }
};