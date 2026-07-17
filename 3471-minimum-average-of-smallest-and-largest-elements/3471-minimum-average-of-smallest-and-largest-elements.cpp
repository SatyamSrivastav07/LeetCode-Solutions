class Solution {
public:
    double minimumAverage(vector<int>& nums) {
       vector<double> averages;
    sort(nums.begin(), nums.end());

    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        double average = (nums[left] + nums[right]) / 2.0;
        averages.push_back(average);
        left++;
        right--;
    }

    return *min_element(averages.begin(), averages.end());
    }
};