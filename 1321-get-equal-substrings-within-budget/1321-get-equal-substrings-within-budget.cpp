class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        vector<int> temp;
        for(int i = 0; i < s.size(); i++) {
            temp.push_back(abs(t[i] - s[i]));
        }
        
        int maxLength = 0, currentCost = 0;
        int left = 0;

        for (int right = 0; right < s.size(); right++) {
            currentCost += temp[right];
            while (currentCost > maxCost) {
                currentCost -= temp[left];
                left++;
            }
            maxLength = max(maxLength, right - left + 1);
        }
        
        return maxLength;
    }
};
