class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end()); // Sorting the array to simplify the logic
        int i = 0, j = people.size() - 1, ans = 0;
        while (i <= j) {
            if (people[i] + people[j] <= limit) {
                i++;
            }
            j--; // Decrement j here, not inside the if condition
            ans++;
        }
        return ans;
    }
};
