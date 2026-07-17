class Solution {
    bool isVowel(char c) {
                return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
    
public:
    int maxVowels(string s, int k) {
        int n=s.length();
        int count=0;
        int maxcount=0;
        for (int i=0;i<k;i++){
            if(isVowel(s[i]))   count++;
            maxcount=count;
        }
        for(int i=k;i<n;i++) {
            if(isVowel(s[i]))    count++;
            if(isVowel(s[i-k]))    count--;
            maxcount=max(maxcount,count);
        }

        return maxcount;
    }
};