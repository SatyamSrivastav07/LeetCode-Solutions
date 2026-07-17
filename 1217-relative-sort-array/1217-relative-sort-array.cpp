class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int n = arr1.size(); 
        int m = arr2.size(); 
        vector<int> ans; 
        vector<int> re;   
        unordered_map<int,int> mp;  
        for(auto& it : arr1){
            mp[it]++;  
        }
        for(int i = 0; i < m; i++){
            if(mp.find(arr2[i]) != mp.end()){
                while(mp[arr2[i]]--){ 
                    ans.push_back(arr2[i]);
                }
            }
        }

        for(auto &it : mp){
            if(it.second > 0){
                while(it.second--)  
                    re.push_back(it.first);
            }
        }
        sort(re.begin(), re.end());
        
        
        for(int i = 0; i < re.size(); i++){
            ans.push_back(re[i]);
        }
        return ans;  
    }
};