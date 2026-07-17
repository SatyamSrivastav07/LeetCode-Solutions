class Solution {
public:
    int passThePillow(int n, int time) {
        int round=time/(n-1);
        int pillow=time%(n-1);
        if(round%2==0)  return  pillow+1;  
        else    return n-pillow;
        
    }
};