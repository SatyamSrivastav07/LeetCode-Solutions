class Solution {
public:
    vector<int> lastVisitedIntegers(vector<string>& words) {
        vector<int> v;

        vector<int> ans;

        int count = 0;

        for(string s: words) {

            if(s == "prev"){

                count++;

                if(count> v.size()) {

                    ans.push_back(-1);

                } 
                else {

                    ans.push_back(v[v.size()-count]);

                }

            }
            else {

                count = 0;

                v.push_back(stoi(s));
            }
        }

        return ans;
    }
};