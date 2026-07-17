class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        int dig1, dig2, dig3, dig4;
        dig4 = min({num1%10, num2%10, num3%10});
        dig3 = min({(num1/10)%10, (num2/10)%10, (num3/10)%10});
        dig2 = min({(num1/100)%10, (num2/100)%10, (num3/100)%10});
        dig1 = min({num1/1000, num2/1000, num3/1000});

        return dig1*1000 + dig2*100 + dig3*10 + dig4;
    }
};