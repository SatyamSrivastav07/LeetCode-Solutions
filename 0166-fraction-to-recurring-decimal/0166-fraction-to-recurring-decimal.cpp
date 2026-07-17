class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        if (numerator == 0) return "0";

        string ans;
        if ((numerator < 0) ^ (denominator < 0)) ans += "-";
        
        long long n = llabs((long long)numerator);
        long long d = llabs((long long)denominator);

        ans += to_string(n / d);
        long long remainder = n % d;
        if (remainder == 0) return ans;
        ans += ".";
        unordered_map<long long, int> mp;
        while (remainder != 0) {
            if (mp.count(remainder)) {
                ans.insert(mp[remainder], "(");
                ans += ")";
                break;
            }
            mp[remainder] = ans.size();
            remainder *= 10;
            ans += to_string(remainder / d);
            remainder %= d;
        }
        return ans;
    }
};
