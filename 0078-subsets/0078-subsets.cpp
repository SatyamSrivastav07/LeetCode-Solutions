class Solution {
public:
    void helper(int ind,vector<vector<int>> &ans,vector<int> &arr,int n,vector<int> nums) {
        if(ind>=n){
            ans.push_back(arr);
            return ;

        }
        arr.push_back(nums[ind]);
        helper(ind+1,ans,arr,n,nums);
        arr.pop_back();
        helper(ind+1,ans,arr,n,nums);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> arr;
        int n=nums.size();
        helper(0,ans,arr,n,nums);
        return ans;
    }
};