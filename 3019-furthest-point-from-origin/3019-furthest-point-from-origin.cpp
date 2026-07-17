class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int cr=0,cl=0,c=0;
        for(int i=0;i<moves.size();i++) {
            if(moves[i] == 'R')   cr++;
            else if(moves[i] == 'L')  cl++;
            else    c++;
        }
        return abs(cr-cl)+c;
    }
};