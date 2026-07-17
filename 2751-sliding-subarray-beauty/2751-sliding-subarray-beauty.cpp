// class Solution {
// public:
//     vector<int> getSubarrayBeauty(vector<int>& v, int k, int x) {
//         vector<int> ans;
//         vector<vector<int>> mp(101);
//         int start = 0,end = 0,n = v.size();
//         while(end < n) {
//             mp[v[end] + 50].push_back(v[end++]);
//             if(end - start > k) {
//                 // mp[[start] + 50].pop_back();
//                 start++;
//             }
//             if(end - start == k) {
//                 int cnt = 0, val;
//                 for(int i = 0; i <= 100; i += 1) {
//                     cnt += mp[i].size();
//                     if(cnt >= x) {
//                         val = mp[i][0];
//                         break;
//                     }
//                 }
//                 ans.push_back(val > 0 ? 0 : val);
//             }
//         }
//         return ans;
//     }
// };
class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
     int n=nums.size();
        vector<int> freq(51,0),ans;
        for(int i=0,j=0;i<n;i++)
        {
            if(nums[i]<0)
            {
                freq[abs(nums[i])]++;
            }
            if(i-j+1>=k)
            {
                int count=0;
                for(int L=50;L>=1;L--)
                {
                    count+=freq[L];
                    if(count>=x)
                    {
                        ans.push_back(-L);
                        break;
                    }
                }
                if(count<x)
                {
                    ans.push_back(0);
                }
                if(nums[j]<0)
                {
                    freq[abs(nums[j])]--;
                }
                j++;
            }
        }
        return ans;
    }
};