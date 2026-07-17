class Solution {
public:
    int minimumSum(int num) {
        vector<int> a;
        int dig,sum1=0,sum2=0;
        while(num!=0){
            dig=num%10;
            a.push_back(dig);
            num/=10;
        }
        sort(a.begin(),a.end());
        for(int i=0;i<4;i++){
            if(i%2==0)  sum1=sum1*10+a[i];
            else    sum2=sum2*10+a[i];
        }
        return sum1+sum2;
    }
};