class Solution {
public:
    map<int,vector<int>> index;
    map<int,vector<int>> prime;

    void dfs(int idx,vector<bool>& visitedIndex,map<int,bool>& visitedPrime){
        if(visitedIndex[idx]==true){
            return;
        }
        visitedIndex[idx]=true;
        for(auto &p:prime[idx]){
            if(visitedPrime[p]==true){
                continue;
            }
            visitedPrime[p]=true;
            for(auto &i:index[p]){
                if(visitedIndex[i]==true){
                    continue;
                }
                dfs(i,visitedIndex,visitedPrime);
            }
        }
    }

    bool canTraverseAllPairs(vector<int>& nums) {
        int n=nums.size();
        if(n<=1){
            return true;
        }

        for(int i=0;i<n;i++){
            int temp=nums[i];
            for(int j=2;j*j<=nums[i];j++){
                if(temp%j==0){
                    index[j].push_back(i);
                    prime[i].push_back(j);
                    while(temp%j==0){
                        temp/=j;
                    }
                }
            }
            if(temp>1){
                index[temp].push_back(i);
                prime[i].push_back(temp);
            }
        }

        vector<bool> visitedIndex(n);
        map<int,bool> visitedPrime;

        dfs(0,visitedIndex,visitedPrime);

        for(int i=0;i<n;i++){
            if(visitedIndex[i]==false){
                return false;
            }
        }
        return true;
    }
};