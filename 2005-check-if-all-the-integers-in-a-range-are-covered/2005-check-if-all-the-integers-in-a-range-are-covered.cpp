class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        map<int,int> mp;
        for(int i=0;i<ranges.size();i++) {
            for(int j=ranges[i][0];j<=ranges[i][1];j++){
                cout<<j<< " ";
                mp[j]++;
            }
            
        }
        if(left>right)  return false;
        while(left<=right){
            cout<<left<<" ";
            if(mp.find(left)==mp.end()){
                cout<<"false";
                return false;
            } 
             
             left++;
           
        }
        return true;
    }
};