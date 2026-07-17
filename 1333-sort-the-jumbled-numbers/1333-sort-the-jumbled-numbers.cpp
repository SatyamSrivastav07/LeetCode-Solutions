class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        
        vector<pair<pair<int, int>, int>> v;

        for (int i = 0; i < nums.size(); i++) {
            int a = nums[i];
            int b = 0;
            int place = 1;
            if (a == 0) {
                b = mapping[0];
            }
            while (a != 0) {
                int rem = a % 10;
                b += mapping[rem] * place;

                place *= 10;
                a /= 10;
            }

            v.push_back({{b, i}, nums[i]});
        }

        sort(v.begin(), v.end());
        vector<int> ans;
        for (auto &it : v) {
            ans.push_back(it.second);
        }

        return ans;
    }
};