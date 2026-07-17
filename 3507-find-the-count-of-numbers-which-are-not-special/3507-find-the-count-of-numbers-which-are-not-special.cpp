class Solution { 
     public :
    bool checkPrime(int num) { 
        if (num < 2) return false; 
        for (int i = 2; i * i <= num; i++) { 
            if (num % i == 0)
                return false; 
        } 
        return true; 
    } 
    int nonSpecialCount(int l, int r) { 
        int special = 0; 
        for (int i = 2; i * i <= r; i++) { 
            if (checkPrime(i)==true) { 
                int limit = i * i; 
                if (limit >= l && limit <= r) { 
                    special++; 
                } 
            } 
        } 
        return r - l - special + 1; 
    } 
 
};

    