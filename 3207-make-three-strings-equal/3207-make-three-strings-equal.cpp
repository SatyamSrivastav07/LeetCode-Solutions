#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int n = min(s1.size(), min(s2.size(), s3.size())); // Finding the minimum length among the three strings
        int i;
        for (i = 0; i < n; i++) {
            if (s1[i] == s2[i] && s2[i] == s3[i])
                continue;
            else
                break;
        }
        if (i == 0) {
            cout << "Debug: All strings are empty or have common prefix." << endl;
            return -1;
        } else {
            int deletion_count = s1.size() - i + s2.size() - i + s3.size() - i;
            cout << "Debug: Deletion count: " << deletion_count << endl;
            return deletion_count;
        }
    }
};


