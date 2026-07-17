class Solution {
public:
    long long minimumPossibleSum(int n, int target) {
        unordered_map<long long int,long long int> mp;
        int num=1;
        long long sum=0;
        int count=0;
        while(count!=n){    
            if(!mp[target-num]){         
                count++;
                sum+=num;  
                mp[num]++;
            }
            num++;  
        }
       
        return sum;
        
    }
};