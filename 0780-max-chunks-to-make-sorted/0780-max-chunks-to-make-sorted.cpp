class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int ans = 0;
        int maxtill = 0;
        for (int i = 0; i < arr.size(); i++) {
            maxtill=max(maxtill,arr[i]);
            if(maxtill==i)  ans++;
        }
        return ans;
    }
};
