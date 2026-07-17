class Solution {
public:
    int maxDistance(string moves) {
        int totalSpace = 0;
        int xAxis = 0;
        int yAxis = 0;
        for ( int i = 0; i < moves.size(); i++ ){
            if ( moves[i] == 'D'){
                yAxis--;
            }
            else if ( moves[i] == 'L'){
                xAxis--;
            }
            else if ( moves[i] == 'U'){
                yAxis++;
            }
            else if ( moves[i] == 'R'){
                xAxis++;
            }
            else if ( moves[i] == '_'){
                totalSpace++;
            }
        }
        for ( int i = 0; i < totalSpace; i++ ){
            if ( xAxis < 0 ){
                xAxis --;;
            }
            else{
                xAxis ++;;
            }
        }
        int distance= abs(0 - xAxis) + abs(0 - yAxis);
        return distance;
    }
};