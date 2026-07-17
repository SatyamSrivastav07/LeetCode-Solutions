class Solution {
public:
    void helper(int idx,vector<int>& candidates,int target,vector<vector<int>>& ans,vector<int>& current,int n ) {
        if(idx==n){
            if(target==0)   ans.push_back(current);
        return ;
        }
        if(candidates[idx]<=target){
            current.push_back(candidates[idx]);
            helper(idx,candidates,target-candidates[idx],ans,current,n);
            current.pop_back();
        }
        helper(idx+1,candidates,target,ans,current,n);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> current;
        helper(0,candidates,target,ans,current,candidates.size());
        return ans;

    }
};