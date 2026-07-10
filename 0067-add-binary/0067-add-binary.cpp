class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        int carr=0;
        int i=a.size()-1;
        int j=b.size()-1;
        while(i>=0 || j>=0 || carr!=0) {
            int sum=carr;
            if(i>=0){
                sum+=a[i]-'0';
                i--;
            }
            if(j>=0){
                sum+=b[j]-'0';
                j--;
            }
            ans+=to_string(sum%2);
            carr=sum/2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    
        
    }
};