class Solution {
public:
    bool isbalanced(int x){
        int cnt[10]={0};

        while(x!=0){
            
            if(cnt[x%10]==(x%10)) return false;
            cnt[x%10]++;
            x/=10;
        }

        for(int i=0; i<10; i++){
            if(cnt[i]!=0 && cnt[i]!=i){
                return false;
            }
        }

        return true;
    }
    int nextBeautifulNumber(int n) {
        
        for(int i=n+1; i<=n*100; i++){
            if(isbalanced(i)) return i;
        }
        return n+1;
    }
};