class Solution {
public:
    int minLights(vector<int>& lights) {
        int n = lights.size();


        vector<int> diff(n + 1, 0);

        for (int i = 0; i < n; i++) {
            if (lights[i] > 0) {
                int L = max(0, i - lights[i]);
                int R = min(n - 1, i + lights[i]);

                diff[L]++;
                if (R + 1 < n)
                    diff[R + 1]--;
            }
        }

        int cur = 0;
        int darkLen = 0;
        int ans = 0;

        for (int i = 0; i < n; i++) {
            cur += diff[i];

            if (cur == 0) {
                darkLen++;
            } else {
                ans += (darkLen + 2) / 3;
                darkLen = 0;
            }
        }

        ans += (darkLen + 2) / 3;

        return ans;
    }
};