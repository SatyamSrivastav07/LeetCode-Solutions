class Solution {
public:
    long reverse(int n) {
        long rev = 0;
        while(n != 0) {
            rev = rev * 10 + n % 10;
            n /= 10;
        }
        return rev;
    }
    
    bool sumOfNumberAndReverse(int num) {
        long rev;
        
        for(int i = 0; i <= num; i++)
            if(i + reverse(i) == num)
                return true;
        
        return false;
    }
};