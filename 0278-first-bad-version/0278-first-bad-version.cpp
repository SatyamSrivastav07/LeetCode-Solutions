// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
         int cnt = 0;
         for(int i=0;i<n;i++) {
             if(isBadVersion(i)) {
                 return cnt;
             }
             cnt++;
          }
        return cnt;
    }
};