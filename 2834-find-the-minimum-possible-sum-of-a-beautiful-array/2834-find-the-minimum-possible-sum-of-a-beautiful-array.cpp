class Solution {
public:
    long long minimumPossibleSum(int n, int target) {
        long long mod=1e9+7;
        long long k=target/2;
        long long count1=min((long long)n,k);
        long long sum1=count1*(count1+1)/2;
        long long count2=n-count1;
        long long sum2=count2*target + (count2-1)*count2/2;
        return (sum1+sum2)%mod;
    }
};