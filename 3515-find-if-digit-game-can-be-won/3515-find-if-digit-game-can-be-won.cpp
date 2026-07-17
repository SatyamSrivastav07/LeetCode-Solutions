class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int alice=0,bob=0;
        for(auto it : nums){
            if(it<10)   alice+=it;
            else    bob+=it;
        }
        return alice!=bob;
    }
    
};