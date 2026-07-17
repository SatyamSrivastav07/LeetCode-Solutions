class Solution{
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int,int> mp;
        int sz=nums.size();
        for(int i=0;i<sz;i++) {
            for(int j=i+1;j<sz;j++) {
                int prod=nums[i]*nums[j];
                mp[prod]++;
            }
        }
        int count=0;
        long long int ans=0;
        for(auto a: mp){
            count=a.second;        
            ans+=(count*(count-1))/2;
              
        }

        return ans*2*2*2;
    }
};
