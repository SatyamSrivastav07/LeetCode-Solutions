class Solution {
public:

    int gcd( int a, int b ){
        while( b != 0 ){
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    long long gcdSum(vector<int>& nums) {
        vector<int> ans;
        int maxi = INT_MIN;

        for ( int i = 0;  i <  nums.size(); i++ ){
            maxi = max(maxi, nums[i]);
            int res = gcd(maxi, nums[i]);

            ans.push_back(res);
        }

        sort(ans.begin(), ans.end());

        long long sum = 0;
        int i = 0;
        int j = ans.size() - 1;

        while (i < j) {

            sum += gcd(ans[i], ans[j]);

            i++;
            j--;
        }

        return sum;
    }
};