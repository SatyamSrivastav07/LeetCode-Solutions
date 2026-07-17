class Solution {
public:
    bool checkGoodInteger(int n) {
        int digitSum = 0;
        int squareSum = 0;

        while ( n != 0 ){
            int rem = n % 10;
            squareSum += rem * rem;
            digitSum += rem;
            n /= 10;
        }

        return squareSum - digitSum >= 50;
    }
};