#include <numeric>
#include <vector>
class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {

        int remSum=mean*(n+rolls.size())-std::accumulate(rolls.begin(),rolls.end(),0);
        if(remSum<n || remSum>n*6)  return { };
        vector<int> ans(n,remSum/n);
        int additional=remSum%n;
        for(int i=0;i<additional;i++) {
            ans[i]++;
        }
        return ans;
    }
};