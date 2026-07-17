class Solution {
public:
    int maxDiff(int num) {
        vector<int> vec;
        while (num) {
            vec.push_back(num % 10);
            num /= 10;
        }
        reverse(vec.begin(), vec.end());

        vector<int> vec1 = vec;
        int toChange = -1;
        for (int i = 0; i < vec1.size(); i++) {
            if (vec1[i] != 9) {
                toChange = vec1[i];
                for (int j = i; j < vec1.size(); j++) {
                    if (vec1[j] == toChange)
                        vec1[j] = 9;
                }
                break;
            }
        }

        vector<int> vec2 = vec;
        toChange = -1;
        if (vec2[0] != 1) { 
            toChange = vec2[0];
            for (int j = 0; j < vec2.size(); j++) {
                if (vec2[j] == toChange)
                    vec2[j] = 1;
            }
        } else { 
            for (int i = 1; i < vec2.size(); i++) {
                if (vec2[i] != 0 && vec2[i] != 1) {
                    toChange = vec2[i];
                    for (int j = i; j < vec2.size(); j++) {
                        if (vec2[j] == toChange)
                            vec2[j] = 0;
                    }
                    break;
                }
            }
        }

        int maxi = 0, mini = 0;
        for (int d : vec1)
            maxi = maxi * 10 + d;
        for (int d : vec2)
            mini = mini * 10 + d;

        return maxi - mini;
    }
};
