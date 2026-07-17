// class Solution {
// public:
//     int numOfSubarrays(vector<int>& arr) {
//         int accuSum=0,ans=0;
//         for(int i=0;i<arr.size();i++){
//             if(arr[i]%2==1) ans++;  
//             if((accuSum%2==1 && arr[i]%2==0) || (accuSum%2==0 && arr[i]%2==1))    ans++;
//             accuSum+=arr[i];
//         }
//         return ans;
//     }
// };

















class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long oddCount = 0, prefixSum = 0;
        for(int a : arr) {
            prefixSum += a;
            oddCount += prefixSum % 2;
            cout<<oddCount<<endl;
        }                                   
        oddCount += (arr.size() - oddCount) * oddCount;
        return oddCount % 1'000'000'007;
    }
};