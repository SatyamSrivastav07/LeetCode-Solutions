class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for(int num: nums){
            mpp[num]+=1;
        }
        for(auto [k,v ]: mpp){
            if(v%2!=0) return false;
        }
        return true;
    }
};