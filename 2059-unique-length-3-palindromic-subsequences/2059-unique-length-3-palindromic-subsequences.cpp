class Solution {
public:
    int countUnique(string s,char c) {
        int first=-1,last=-1,cnt=0;
        for(int i=0,j=s.size()-1;i<s.size();i++,j--) {
            if(s[j]==c) first=j;
            if(s[i]==c) last=i;
        }
        vector<int> count(26,0);
        for(int i=first+1;i<last;i++) {
            if(count[s[i]-'a']++ == 0)  cnt++;
        }
        return cnt;
        
    }
    int countPalindromicSubsequence(string s) {
        int ans=0;
        for(char ch='a';ch <='z';ch++){
                ans+=countUnique(s,ch);
            }
        
        return ans;
    }
};