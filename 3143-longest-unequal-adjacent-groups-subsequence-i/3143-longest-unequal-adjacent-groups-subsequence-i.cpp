class Solution {
public:
    vector<string> getWordsInLongestSubsequence(int n, vector<string>& words, vector<int>& groups) {
       
    int longest_length = 0;

    int current_group = -1;

    vector<string> longest;

    for (int i=0; i<n; ++i) {

        if (groups[i]!= current_group) {

        longest.push_back(words[i]); 
        current_group = groups[i];
        longest_length++;
        }
    }

    return longest;
        
    }
};