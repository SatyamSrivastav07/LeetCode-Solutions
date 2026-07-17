class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        long long currentTime = 0;
        long long totalWait = 0;

        for (int i = 0; i < customers.size(); i++) {
            int arrival = customers[i][0];
            int cookTime = customers[i][1];
            if (currentTime < arrival) {
                currentTime = arrival;
            }

            currentTime += cookTime;
            totalWait += (currentTime - arrival);
        }

        return (double)totalWait / customers.size();
    }
};