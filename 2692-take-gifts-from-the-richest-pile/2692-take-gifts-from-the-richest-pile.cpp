class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq(gifts.begin(), gifts.end());
        int a;
        while (k--) {
            a = pq.top();
            pq.pop();
            pq.push(floor(sqrt(a)));
        }
        long long sum=0;
        while (!pq.empty()) {
            sum += pq.top(); // Add the top element to sum
            pq.pop();        // Remove the top element
        }
        return sum;
    }
};