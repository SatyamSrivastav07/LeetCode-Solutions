class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
    int len = words.size();
    int counter = 0;
    for(int i=0;i<len-1;i++){
        string a = words[i];
        string reverse = string(1, a[1]) + string(1, a[0]);
        for (int j = i + 1; j < len; j++) {
            if (reverse == words[j]) {
                counter++;
                break;
            }
        }
    }
    return counter;

        
    }
};