class compare {
public:
    bool operator()(pair<char, int> a, pair<char, int> b) {
        if(a.first == b.first)
            return a.second < b.second;
        else 
            return a.first > b.first;
    }
};

class Solution {    
public:
    string clearStars(string s) {
        int len = s.length();
        priority_queue<pair<char, int>, vector<pair<char, int>>, compare> pq;
        string ans;
        
        for(int i = 0; i < len; i++) {
            if(s[i] != '*')
                pq.push({s[i], i});
            else {
                char smallCh = pq.top().first;
                int smallIdx = pq.top().second;
                pq.pop();
                s[smallIdx] = s[i] = '#';
            }
            
        }
        
        for(auto ch : s) {
            if(ch != '#')
                ans.push_back(ch);
        }
        
        return ans;
    }
};