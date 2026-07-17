class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int ans=0;
        int first,second;
        priority_queue<int> pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        while(pq.top()>0){
            if(pq.top()>0){
                 first=pq.top();
                pq.pop();
            }
            if(pq.top()>0){
                 second=pq.top();
                pq.pop();
            }
            else{
                break;
            }
            ans++;
            pq.push(first-1);
            pq.push(second-1);
        }
        return ans;
    }
};