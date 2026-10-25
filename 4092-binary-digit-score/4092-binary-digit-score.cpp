class Solution {
public:
    int calculateScore(int a, int b) {
        int countA = 0, countB = 0;
        while (a != 0) {
            int dig = a & 1;
            if (dig)
                countA++;
            a = a >> 1;
        }
        while (b != 0) {
            int dig = b & 1;
            if (dig)
                countB++;

            b = b >> 1;
        }
        return countA >= countB ? countA * countB : countB / countA;
    }
};