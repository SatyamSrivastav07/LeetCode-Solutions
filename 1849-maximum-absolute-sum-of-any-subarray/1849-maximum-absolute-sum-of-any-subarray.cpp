class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int ans = 0,cs1=0,cs2=0;
        for(auto &i: nums){
            cs1 += i;
            if(cs1<0){
                cs1 = 0;
            }
            cs2 += i;
            if(cs2>0){
                cs2 = 0;
            }
            ans = max({ans,cs1,-cs2});
        }
        return ans;
    }
};