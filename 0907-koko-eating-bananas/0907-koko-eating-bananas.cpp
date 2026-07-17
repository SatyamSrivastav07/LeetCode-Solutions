class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int ans = 0, l = 1, r = 1e9;

        while (l <= r) {
            int speed = l + (r - l) / 2;
            long long cnt = 0;

            for (int pile : piles) {
                cnt += (pile + speed - 1) / speed;
            }

            if (cnt <= h) {
                ans = speed;
                r = speed - 1;
            }
            else {
                l = speed + 1;
            }
        }

        return ans;
    }
};