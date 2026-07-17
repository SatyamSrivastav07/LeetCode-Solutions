class Solution
{
public:
    int trap(vector<int> &height)
    {
        int l = 0, r = height.size() - 1;
        int left_max = -1, right_max = -1;
        int water = 0;

        while (l < r)
        {
            left_max = max(left_max, height[l]);
            right_max = max(right_max, height[r]);

            if (left_max < right_max)
                water += left_max - height[l++];
            else
                water += right_max - height[r--];
        }

        return water;
    }
};
