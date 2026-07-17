class Solution {
public:
    int maxNumberOfBalloons(string text) {
          vector<int> b(5,0);
          for(int i=0;i<text.size();i++) {
              if(text[i]=='b')  b[0]++;
              if(text[i]=='a')  b[1]++;
              if(text[i]=='l')  b[2]++;
              if(text[i]=='o')  b[3]++;
              if(text[i]=='n')  b[4]++;
           }
           int x=*min_element(b.begin(),b.end());
           if(b[2]<=2*x || b[3]<=2*x) return min(b[2],b[3])/2;
           else return x;
    
         }

};