class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
    unordered_map<int,int>map;
    vector<int>ans;
    for (auto n: nums)
    {
        if (map.count(n)<=0) map[n]=1;
        else {map.erase(n);}
    }
    for (auto it=map.begin(); it!=map.end(); it++)  ans.push_back(it->first);
    return ans;  
    }
}; 