class Solution {
    public:
        long minimumSteps(string s) {
        long minSteps = 0;
        int whiteBallIndex = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '0') {
                minSteps += (i - whiteBallIndex);
                whiteBallIndex++;
            }
        }
        return minSteps;
    }
};