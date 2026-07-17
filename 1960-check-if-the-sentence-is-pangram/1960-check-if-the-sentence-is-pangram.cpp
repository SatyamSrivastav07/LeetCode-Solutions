class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>alpha(26,0);
        for(int i=0;i<sentence.size();i++)
        {
            int index=sentence[i]-'a';
            alpha[index]++;
        }
        for(int i=0;i<26;i++)
        {
            if(alpha[i]==0)
            return 0;
        }
        return 1;
    }
};