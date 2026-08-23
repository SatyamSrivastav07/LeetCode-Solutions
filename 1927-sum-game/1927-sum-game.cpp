class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();

        int leftSum = 0;
        int rightSum = 0;
        int leftQ = 0;
        int rightQ = 0;

        for (int i = 0; i < n; i++) {
            if (i < n / 2) {
                if (num[i] == '?') {
                    leftQ++;
                } else {
                    leftSum += num[i] - '0';
                }
            } else {
                if (num[i] == '?') {
                    rightQ++;
                } else {
                    rightSum += num[i] - '0';
                }
            }
        }

        if ((leftQ + rightQ) % 2 == 1) {
            return true;
        }

        int currentDifference = leftSum - rightSum;
        int requiredDifference = (rightQ - leftQ) / 2 * 9;

        return currentDifference != requiredDifference;
    }
};