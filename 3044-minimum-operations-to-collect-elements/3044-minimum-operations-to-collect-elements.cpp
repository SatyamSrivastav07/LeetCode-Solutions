// class Solution {
// public:
//     int minOperations(vector<int>& nums, int k) {
//         int n =nums.size(),count=0,a=0;
//         vector<bool> check(n-1,false);
//         for(int i=n-1;i>=0;i--){
//             count++;
//             if(nums[i]<=k && check[i]==false){
//                 check[i]=true;
//                 a++;
//             }
//             else if(a==k)   break;
//         }
//         return count;
//     }
// };

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        set<int> values; 
        int moves = 0; 
        for (int i = nums.size() - 1; i >= 0; i--) {
            moves++; 
            if (nums[i] <= k) {
                values.insert(nums[i]); 
            }
            
            if (values.size() == k) {
                return moves;
            }
        }
        
        return 0; 
    }
};