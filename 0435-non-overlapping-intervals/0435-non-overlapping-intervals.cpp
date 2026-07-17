class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int high = INT_MIN;
        sort(intervals.begin(),intervals.end(),[](vector<int>& i1,vector<int>& i2){return i1[1] < i2[1];});
        int n = intervals.size();
        int ans = 0; 
        for(int i{};i<n;i++){
            if(intervals[i][0] >= high){
                high = intervals[i][1];
            }else ans++;
        }
        return ans;
    }
};