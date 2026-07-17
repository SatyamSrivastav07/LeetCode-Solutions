class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long score=0;
        priority_queue<int> pq;
        for(int i=0;i<nums.size();i++) {
            pq.push(nums[i]);
        }
        int a;
        while(k--) {
            a=pq.top();
            pq.pop();
            score+=a;
            if(a % 3 == 0) pq.push(a / 3);
            else pq.push((a / 3) + 1);
            
        }
        return score;
    }
};