class Solution {
private:
    int countNumberOfMatches (int n) {
        if( n == 1)
            return 0 ;
        if(n %2 == 0)
            return n/2 + countNumberOfMatches(n/2);
        else 
            return (n-1)/2 + countNumberOfMatches((n-1)/2+1);
    }    
public:
    int numberOfMatches(int n) {
        return countNumberOfMatches(n); 
        
    }
};