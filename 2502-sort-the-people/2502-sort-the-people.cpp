class Solution {
    public:
        vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
                int n = names.size();
                        vector<pair<int, string>> p;
                                for(int i=0; i<n; i++) {
                                            p.push_back({heights[i], names[i]});
                                                    }
                                                            
                                                                    // sort heights in descending order using c++ STL :)
                                                                            sort(p.rbegin(), p.rend());
                                                                                    
                                                                                            vector<string> ans;
                                                                                                    for(auto it : p) {
                                                                                                                ans.push_back(it.second);
                                                                                                                        }
                                                                                                                                return ans;
                                                                                                                                    }
                                                                                                                                    };
