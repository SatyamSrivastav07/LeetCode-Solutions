class Solution {
public:
    int maxHeightOfTriangle(int red, int blue) {
        int r = red, b = blue, k = 1, ans1 = 0, ans2 = 0;

        while (r >= 0 && b >= 0) {
            if (k % 2) {
                r -= k;
            } else {
                b -= k;
            }
            if (r >= 0 && b >= 0) {
                ans1 = k;
            }
            k++;
        }

        r = red, b = blue, k = 1;

        while (r >= 0 && b >= 0) {
            if (k % 2) {
                b -= k;
            } else {
                r -= k;
            }
            if (r >= 0 && b >= 0) {
                ans2 = k;
            }
            k++;
        }

        return max(ans1, ans2);
    }
};
