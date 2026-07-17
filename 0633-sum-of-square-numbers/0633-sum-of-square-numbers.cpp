class Solution {
public:
    bool judgeSquareSum(int c) {
        long start = 0; 
        long end  = (long)sqrt(c);

        while( start <= end ){
            long long ans = start * start + end * end;
            if ( ans  > c ){
                end--;
            }
            else if ( ans < c ){
                start++;
            }
            else if ( ans == c )       return true;
        }
        return false; 
    }
};