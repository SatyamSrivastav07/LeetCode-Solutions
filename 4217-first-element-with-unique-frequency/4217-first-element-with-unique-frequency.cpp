class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int, int> freq;
        unordered_map<int, int> freqFreq;
        for (int a : nums)
            freq[a]++;
        for (auto i : freq)
            freqFreq[i.second]++;
        for (int i : nums) {
            if (freqFreq[freq[i]] == 1)
                return i;
            ;
        }
        return -1;
    }
};