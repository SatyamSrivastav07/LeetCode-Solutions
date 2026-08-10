class Solution {
public:
    string getHappyString(int n, int k) {
        string res = "";

        for(int pos=0; pos<=n-1; pos++)
        {
            int taken = 0;
            for(int i=0; i<=2; i++)
            {
                char curr = 'a' + i;

                if(!res.empty() && res.back() == curr) continue;  

                int remPlace = n - pos - 1, remChar = 2; 

                int totalCom = 1<<remPlace; // no of ways to keep them is (remChar^remplace)

                if(totalCom < k) k -= totalCom;
                else {
                    taken = 1;
                    res.push_back(curr);
                    break;
                }
            }
            if(!taken) return "";
        }

        cout<<k<<endl;
        return res;
    }
};