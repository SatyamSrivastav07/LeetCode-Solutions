class Solution {
public:
    
    vector<vector<string>> ans;
    vector<string> temp;
    
    bool isPalindrome(string &s, int l, int r) {
        while (l < r) {
            if (s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
    
    void solve(int idx, string &s) {
        
        if (idx == s.size()) {
            ans.push_back(temp);
            return;
        }
        
        for (int end = idx; end < s.size(); end++) {
            
            if (isPalindrome(s, idx, end)) {
                
                temp.push_back(s.substr(idx, end - idx + 1));
                
                solve(end + 1, s);
                
                temp.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        solve(0, s);
        return ans;
    }
};