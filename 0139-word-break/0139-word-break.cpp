class Solution {
public:

    vector<int> dp;

    bool solve(int idx,
               string& s,
               unordered_set<string>& st) {

        if(idx == s.size())
            return true;

        if(dp[idx] != -1)
            return dp[idx];

        string curr = "";

        for(int end = idx; end < s.size(); end++) {

            curr += s[end];

            if(st.count(curr)) {

                if(solve(end + 1, s, st))
                    return dp[idx] = true;
            }
        }

        return dp[idx] = false;
    }

    bool wordBreak(string s, vector<string>& wordDict) {

        unordered_set<string> st(wordDict.begin(),
                                 wordDict.end());

        dp.resize(s.size(), -1);

        return solve(0, s, st);
    }
};