class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        int n=happiness.size();
        sort(happiness.begin(),happiness.end());
      long long  int sum=0;
        int count=0;
        for(int i=n-1;i>n-k-1;i--){
        
            happiness[i]-=count;
            if(happiness[i]<0){
                happiness[i]=0;
            
            
            }
            
             sum+=happiness[i];
             count++;
            
        
        }
        return sum;

        
    }
};