class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int, int> mp;
        for (int num : arr) {
            int rem = ((num % k) + k) % k;
            mp[rem]++;
        }
        for (int num : arr) {
            int rem = ((num % k) + k) % k;
            if (rem == 0) {
                if (mp[rem] % 2 != 0)
                    return false;
            } else {
                if (mp[rem] != mp[k - rem])
                    return false;
            }
        }
        return true;
    }
};
