class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {

        vector<int> ans;
        int sum;

        for ( int i = 0; i < queries.size(); i++){
            for ( int j = 0; j < queries[0].size();j ++){
                int idx = queries[i][1];

                nums[idx] = nums[idx] + queries[i][0];
            

            sum = 0;

            for ( int k = 0; k < nums.size(); k++ ){
                if(nums[k]  % 2 == 0 ){
                    sum = sum + nums[k];
                }
            }
            cout << sum << endl;
            ans.push_back(sum);
            break;
            }
        
        }
        return ans;
    }
};