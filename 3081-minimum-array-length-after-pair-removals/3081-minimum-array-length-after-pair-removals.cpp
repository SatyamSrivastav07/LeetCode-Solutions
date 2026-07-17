class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)    mp[nums[i]]++;
        int maxim=0;
        for(auto it:mp){
            maxim=max(maxim,it.second);
        }
        if(maxim > nums.size()/2){
            return 2*maxim-nums.size();
        }
        if(nums.size() % 2==0){
            return 0;
        }
        else
            return 1;
        
        
    }
};