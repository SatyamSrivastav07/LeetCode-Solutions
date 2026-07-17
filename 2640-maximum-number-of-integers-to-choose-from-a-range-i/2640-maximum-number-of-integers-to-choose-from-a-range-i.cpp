// class Solution {
// public:
//     int maxCount(vector<int>& banned, int n, int maxSum) {
//         unordered_map<int,int> mp;
//         for(auto a : banned)    mp[a]++;
//         int  count =0,sum=0;
//         for(int i=1;i<=n;i++){
//             if(mp[i]!=1 && sum+i<=maxSum){
//                 cout<<i<<endl;
//                 sum+=i;
//                 count++;
//             }
//         }
//         return count;
//     }
// };
class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_set<int> bannedSet(banned.begin(), banned.end());  
        int count = 0, sum = 0;
        
        for (int i = 1; i <= n; i++) {
            if (bannedSet.find(i) == bannedSet.end() && sum + i <= maxSum) {
                sum += i;
                count++;
            }
        }
        
        return count;
    }
};
