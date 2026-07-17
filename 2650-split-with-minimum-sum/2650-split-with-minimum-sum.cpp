class Solution {
public:
    int splitNum(int num) {
        string s = to_string(num);
        sort(s.begin(),s.end());
        int n=s.size();
        string s1;
        string s2;
        for(int i=0;i<n;i++){
            if(i%2==0){
                s1[i/2]=s[i];
            }
            else{
                s2[i/2]=s[i];
            }
        }
        int ans = stoi(s1) + stoi(s2);
        return ans;
        
    }
};