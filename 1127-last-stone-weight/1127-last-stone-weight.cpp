// class Solution {
// public:
//     int lastStoneWeight(vector<int>& stones) {
//         int a,b;
//         // priority_queue<int> stones;
//         // for(int i=0;i<stones.size();i++) {
//         //     stones.push(stones[i]);
//         // }
        
//         // return stones.top();
//         sort(stones.begin(),stones.end() ,greater<int>);
//         for(int i=0;i<stones.size();i++) {
//             a=stones[0];
//             stones.pop_back()
//             b=stones[0];
//             stones.pop_back()
//             stones.push_back(abs(a-b));
//             sort(stones.begin(),stones.end(),greater<int>);
//         }
       
//     }
// };
class Solution {
public:
    int lastStoneWeight(vector<int>& A) {
          priority_queue<int> pq(begin(A), end(A));
        while (pq.size() > 1) {
            int x = pq.top();
             pq.pop();
            int y = pq.top();
             pq.pop();
            if (x > y)
                 pq.push(x - y);
        }
        if( pq.empty()) {
            return 0;
        }
        else    return pq.top();
    }
}; 