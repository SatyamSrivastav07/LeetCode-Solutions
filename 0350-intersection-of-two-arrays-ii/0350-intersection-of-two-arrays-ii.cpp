class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i=0;i<nums2.size();i++){
            mp[nums2[i]]++;
        }
        for(int a:nums1){
            if(mp[a]>0){
                ans.push_back(a);
                mp[a]--;
            } 
        }
         return ans;
  
    }
};