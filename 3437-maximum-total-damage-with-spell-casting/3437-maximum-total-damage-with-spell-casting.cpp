class Solution {
public:
    long long maximumTotalDamage(vector<int>& power) {
        sort(power.begin(),power.end());
        int n=power.size();
        int last_index=-1;
        int curr_index=0;
        long long best_till_now=0;
        vector<long long> dp(n,0);
        long long ans=0;
        for( ;curr_index<n;curr_index++){
             while(power[last_index + 1] < power[curr_index] - 2 ){
                last_index++;
                best_till_now=max(dp[last_index],best_till_now);
            }
            if( curr_index!=0 && power[curr_index]==power[curr_index - 1] ){
                dp[curr_index]=dp[curr_index-1]+power[curr_index];
            } else {
                dp[curr_index] = power[curr_index]+best_till_now;
            }
            
            ans=max(dp[curr_index],ans);
        }
        return ans;
    }
};