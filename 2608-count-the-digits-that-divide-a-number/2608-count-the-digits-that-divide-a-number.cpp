class Solution {
public:
    int countDigits(int num) {
        int nums=num;
        int ans=0;
        while(num){
            int digit =num%10;
            if(nums % digit==0) ans++;
            num=num/10;
        }
        return ans;
    }
};