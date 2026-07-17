class Solution {
public:
    int findLucky(vector<int>& arr) {
      unordered_map<int,int>mp;
      for( int x=0;x<arr.size();x++)
      {
          mp[arr[x]]++;
      }
      vector<int>ans;
      for(auto i:mp)
      {
          if(i.first==i.second)
          {
             ans.push_back(i.first);
          }
      }
      sort(ans.begin(),ans.end());
      if(ans.size()==0)
      {
          return -1;
      }
      else
        return ans[ans.size()-1];
    }
};