class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        vector<int>freq(51,0);
        for(int i:nums){
            freq[i]++;
        }
        if(k==1){
            for(int i=freq.size()-1;i>=0;i--){
                if(freq[i]==1){
                    return i;
                }
            }
        }else if(k==nums.size()){
            return *max_element(nums.begin(),nums.end());
        }else{
            int maxi=-1;
            if(freq[nums[0]]==1){
                maxi=max(maxi,nums[0]);
            }if(freq[nums[nums.size()-1]]==1){
                maxi=max(maxi,nums[nums.size()-1]);
            }return maxi;
        }return -1;
    }
};