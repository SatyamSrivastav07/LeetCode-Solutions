class Solution {
public:
    int firstdigit(long long n){
        while(n>=10)n/=10;
        return n;
    }
    int countValidSubarrays(vector<int>& nums, int x) {
        int n=nums.size();
        vector<long long> pref(n+1,0);

        for(int i=0;i<n;i++){
            pref[i+1]=pref[i]+nums[i];
        }

        int ans=0;

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                long long sum=pref[j+1]-pref[i];
                if(sum%10!=x)continue;
                if(firstdigit(sum)==x)ans++;
            }
        }
        return ans;
    }
};