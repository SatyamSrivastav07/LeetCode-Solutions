class Solution {
public:
    int helper(int n,vector<int> &cache){
        if(n<=2) return n;
        if(cache[n]!=-1)    return cache[n];
        
        return cache[n] = helper(n-1,cache)+helper(n-2,cache);
    }
    int climbStairs(int n) {
         vector<int> cache(n+1,-1);
         return helper(n,cache);
    }
    
};