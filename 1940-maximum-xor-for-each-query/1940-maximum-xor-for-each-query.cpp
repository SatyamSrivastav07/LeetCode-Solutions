class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
       int temp = (1 << maximumBit)-1 ;  
        int cumulativeXor = 0;
        vector<int> result;

        for (int num : nums) {
            cumulativeXor ^= num;
            result.push_back(cumulativeXor ^ temp); 
        }
        reverse(result.begin(), result.end());
        return result;
        
    }
};