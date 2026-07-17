class Solution {
public:
    int percentageLetter(string s, char letter) {
        int l=0;
        for(auto a : s){
            if(a==letter)   l++;
        }
        return 100*l/s.size();
    }
};