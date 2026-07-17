class Solution {
    public:
        bool check(string s)
            {
                    int n=s.size();
                            int st=0;
                                    int e=n-1;
                                            while(st<e)
                                                    {
                                                                if(s[st]!=s[e])
                                                                            return false;
                                                                                    }
                                                                                            return true;
                                                                                                }
                                                                                                    bool base(int n,int k)
                                                                                                        {
                                                                                                                string s="";
                                                                                                                        while(n!=0)
                                                                                                                                {
                                                                                                                                            int a=n/k;
                                                                                                                                                        s=s+to_string(a);
                                                                                                                                                                    n=n/k;
                                                                                                                                                                            }
                                                                                                                                                                                    bool p=check(s);
                                                                                                                                                                                            return p;
                                                                                                                                                                                                }
                                                                                                                                                                                                    bool isStrictlyPalindromic(int n) 
                                                                                                                                                                                                        {
                                                                                                                                                                                                                for(int i=2;i<=n-2;i++)
                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                    bool k=base(n,i);
                                                                                                                                                                                                                                                if(!k)
                                                                                                                                                                                                                                                            return false;
                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                            return true;
                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                };
