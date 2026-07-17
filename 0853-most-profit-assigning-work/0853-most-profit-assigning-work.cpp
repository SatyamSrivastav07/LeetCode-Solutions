class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int, int>> jobs;
        for (int i = 0; i < difficulty.size(); ++i) {
            jobs.emplace_back(difficulty[i], profit[i]);
        }
        sort(jobs.begin(), jobs.end());
        sort(worker.begin(), worker.end());

        int maxProfit = 0;
        int jobIndex = 0;
        int bestProfit = 0;

        for (int skill : worker) {
            while (jobIndex < jobs.size() && skill >= jobs[jobIndex].first) {
                bestProfit = max(bestProfit, jobs[jobIndex].second);
                jobIndex++;
            }
            maxProfit += bestProfit;
        }

        return maxProfit;
    }
};
