class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n = seats.size();
        int lastOccupied = -1;
        int maxDist = 0;
        
        for (int i = 0; i < n; i++) {
            if (seats[i] == 1) {
                if (lastOccupied == -1) {
                    maxDist = i;
                } else {
                    maxDist = max(maxDist, (i - lastOccupied) / 2);
                }
                lastOccupied = i;
            }
        }
        
        maxDist = max(maxDist, n - 1 - lastOccupied);
        
        return maxDist;
    }
};
