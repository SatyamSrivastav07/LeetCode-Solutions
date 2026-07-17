class Solution {
public:
    long long minEnergy(int n, int brightness, vector<vector<int>>& intervals) {
        long long total_time = 0;
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> merged;
        vector<int> prev = intervals[0];
        for(int i=1; i<intervals.size(); i++){
            if(intervals[i][0] <= prev[1]){
                prev[1] = max(prev[1],intervals[i][1]);
            }
            else{
                merged.push_back(prev);
                prev = intervals[i];
            }
        }
        merged.push_back(prev);

        for(int i=0; i<merged.size(); i++){
            total_time += (merged[i][1]-merged[i][0]) + 1;
        }
        long long c = 0;
        if(brightness%3!=0){
            c = brightness/3;
            c++;
        }
        else c = brightness/3;

        return c*total_time;
    }
};