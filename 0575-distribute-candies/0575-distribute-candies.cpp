class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size()/2;
        map<int,int> mp;
        for(int i=0;i<2*n;i++){
            mp[candyType[i]]++;
        }
        if(mp.size()>n) return n;
        
    return mp.size();    
    }
};