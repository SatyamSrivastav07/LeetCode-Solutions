class Solution {
public:
    string reversePrefix(string word, char ch) {
        int cnt=0;
        for(int i=0;i<word.size();i++){
            if(word[i]==ch) break;
            cnt++;
        }
        if(cnt>=word.size())    return word;
        for(int i=0;i<(cnt+1)/2;i++){
            swap(word[i],word[cnt-i]);
        }
        return word;
    }
};