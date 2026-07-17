class Solution {
public:
    string removeTrailingZeros(string num) {
        int cnt=0;
        for(int i=num.size()-1;i>=0;i--){
            if(num[i]=='0'){
                cnt++;
                cout<<cnt<<endl;
            }
            else    break;

        }
        return num.substr(0,num.size()-cnt);

    }
};