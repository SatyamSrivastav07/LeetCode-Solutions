class Solution {
public:

    int countDig(int n, int digit){
        int count = 0;
        while ( n != 0 ){
            int rem = n % 10;
            if ( rem == digit ) count++;
            n = n / 10;
        }
        return count;
    }
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int sum = 0;
        for ( int i = 0; i < nums.size(); i++ ){
            sum = sum + countDig(nums[i], digit);
        }
    
    return sum;
    }
};