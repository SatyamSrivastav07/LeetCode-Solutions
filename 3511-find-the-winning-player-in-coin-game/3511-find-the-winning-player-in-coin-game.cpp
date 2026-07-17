class Solution {
public:
    string losingPlayer(int x, int y) {
            int t=min(x,y/4);
             if(t%2){
                return "Alice";
          }
         else{
                return "Bob";
         }
    }
};