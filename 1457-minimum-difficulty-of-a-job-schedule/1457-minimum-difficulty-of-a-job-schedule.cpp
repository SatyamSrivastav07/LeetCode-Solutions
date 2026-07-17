class Solution {
public:
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        return minDifficultyOptimized(jobDifficulty, d);
    }

    int minDifficultyOptimized(const vector<int>& jobDifficulty, int d) {
        const int n = static_cast<int>(jobDifficulty.size());

        if (n < d) {
            return -1;
        } else if (n == d) {
            int totalDifficulty = 0;
            for (int difficulty : jobDifficulty)
                totalDifficulty += difficulty;
            return totalDifficulty;
        }
        vector<int> dp(n);
        dp[0] = jobDifficulty[0];
        for (int i = 1; i < n; ++i) {
            dp[i] = max(jobDifficulty[i], dp[i - 1]);
        }

        vector<int> dpPrev(n);
        vector<int> stkIdx;
        stkIdx.reserve(n);
        int lastIdx;
        for (int i = 1; i < d; ++i) {
            dp.swap(dpPrev);
            stkIdx.clear();

            for (int j = i; j < n; ++j) {
                dp[j] = jobDifficulty[j] + dpPrev[j - 1];
                while (!stkIdx.empty() && jobDifficulty[stkIdx.back()] <= jobDifficulty[j]) {
                    lastIdx = stkIdx.back();
                    stkIdx.pop_back();
                    dp[j] = min(dp[j], dp[lastIdx] + jobDifficulty[j] - jobDifficulty[lastIdx]);
                }

                if (!stkIdx.empty()) {
                    lastIdx = stkIdx.back();
                    dp[j] = min(dp[j], dp[lastIdx]);
                }

                stkIdx.emplace_back(j);
            }
        }

        return dp.back();
    }
};
