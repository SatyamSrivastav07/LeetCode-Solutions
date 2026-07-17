class Solution {
public:
    bool isPowerOfThree(int n) {
        double x = (double)n;
        while(true){
            if(x == 1){
                return true;
            }
            else if (x<=0){
                return false;
            }
            x = x/3;
        }
        return false;



        // method 2 -
        // if(n<=0){
        //     return false;
        // }
        // for(long long i = 1 ; i<=n ;i = i*3){
        //     if (i == n){
        //         return true;
        //     }
        // }
        // return false;
    }
};