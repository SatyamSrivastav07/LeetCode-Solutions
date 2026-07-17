class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        int ans = 0;
        map<int, int> remainderCount;
        for(int hour : hours) {
            int remainder = hour % 24;
            int complement = (24 - remainder) % 24; 
            if(remainderCount.find(complement) != remainderCount.end()) {
                ans += remainderCount[complement];
            }
            remainderCount[remainder]++;
        }
        return ans;
    }
};
