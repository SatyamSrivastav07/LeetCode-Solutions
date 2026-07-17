class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        int count=0,count2=n;
        vector<int> vect(2*n);
        for(int i=0;i<2*n;i++){
            if(i%2==0)
            {
                vect[i]=nums[count];
                count++;
            }
            else
            {
                vect[i]=nums[count2];
                count2++;
             }
        }
        
        return vect;
        
    }
};