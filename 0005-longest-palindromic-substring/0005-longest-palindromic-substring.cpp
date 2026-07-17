class Solution {
public:
   
   bool is_pali(int low,int high,string &s)
   {
     while(low<high)
     {
       if(s[low]!=s[high]) return false;
       low++;
       high--;
     }
     return true;
   }
  
    string longestPalindrome(string s)
    {
      int maxi=INT_MIN;
      string ans;
      int n=s.size();
        for(int i=0;i<n;i++)
        {
          for(int j=n-1;j>=i;j--)
          {
            if(is_pali(i,j,s))
            {
              if(maxi<(j-i+1))
              {
                maxi=j-i+1;
                ans=s.substr(i,j-i+1);
              }
              break;
            }
          }
        }
        return ans;
    }
};