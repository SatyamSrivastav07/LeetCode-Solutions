class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        set<int> uniqueNum;
        vector<int> result;
        int cnt = 0;
        for(int i=0;i<A.size();i++) {
            if(uniqueNum.find(A[i]) != uniqueNum.end())   cnt++;
            uniqueNum.insert(A[i]);
            if(uniqueNum.find(B[i]) != uniqueNum.end())   cnt++;
            uniqueNum.insert(B[i]);
            result.push_back(cnt);
        }
        return result;
    }
};