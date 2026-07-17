class Solution {
public:
    vector<string> findHighAccessEmployees(vector<vector<string>>& access_times) {
        vector<string> ans;
        // unordered_map<char> maps;
        map<string,vector<int>> mp;
        for(int i=0;i<access_times.size();i++){
            // if(maps[access_times[i][0]]){
                mp[access_times[i][0]].push_back(stoi(access_times[i][1]));
            // }
            // else
        }
        
        for (auto i = mp.begin(); i != mp.end(); i++) 
        {   
            vector<int> temp=i->second;
            int len = temp.size();
            sort(temp.begin(),temp.end());
             for(int x=0;x<len-2;x++){
                 if(temp[x+2] - temp[x] < 100){
                    ans.push_back(i->first);
                     break;
                 }
                 
             }
            
            
        }
        
        return ans;
        
    }
};