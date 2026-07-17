class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int start = *max_element(weights.begin(), weights.end());
        int end = accumulate(weights.begin(), weights.end(), 0);
        int ans ;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            int currentWeight = 0;
            int currentDay = 1;

            for (auto a : weights) {
                if (currentWeight + a <= mid) {
                    currentWeight += a;
                } else {
                    currentDay++;
                    currentWeight = a;
                }
            }

            if (currentDay <= days) {
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        return ans;
    }
};