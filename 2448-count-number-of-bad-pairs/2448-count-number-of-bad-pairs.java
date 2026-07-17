class Solution {
    public long countBadPairs(int[] nums) {
        int n=nums.length;
        Map<Integer,Integer> goodPairs=new HashMap<>(n);
        long badPairs=0;
        
        for(int i=0;i<n;i++){
            int val=nums[i]-i;
            badPairs+=(i-goodPairs.getOrDefault(val,0));
            goodPairs.put(val,goodPairs.getOrDefault(val,0)+1);
        }
        return badPairs;
        
    }
}