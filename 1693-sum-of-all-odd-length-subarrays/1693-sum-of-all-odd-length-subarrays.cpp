class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans=0,n=arr.size(),i;
        for(i=0;i<arr.size();i++){
            int contri=ceil((i+1)*(n-i)/2.0);
            ans+=contri*arr[i];
        }
        return ans;
    }
};