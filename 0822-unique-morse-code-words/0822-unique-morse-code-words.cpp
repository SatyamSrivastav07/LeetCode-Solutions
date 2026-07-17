class Solution {
    
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string arr[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_map<string,int>m;
        for(int i=0;i<words.size();i++){
            string s="";
            for(int j=0;j<words[i].size();j++){
                string temp=words[i];
                s+=arr[temp[j]-'a'];
            }
            m[s]++;
        }
        return m.size();
    }
};