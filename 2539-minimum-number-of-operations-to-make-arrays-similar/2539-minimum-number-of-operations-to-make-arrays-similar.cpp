class Solution {
public:
    long long makeSimilar(vector<int>& nums, vector<int>& target) {
        vector<int> even1;
        vector<int> odd1;
        vector<int> even2;
        vector<int> odd2;
        long ans=0;
        for(int i=0;i<target.size();i++){
            if(nums[i]%2==0){
                even1.push_back(nums[i]);
            }
            else{
                odd1.push_back(nums[i]);
            }    
        }
        for(int i=0;i<target.size();i++){
            if(target[i]%2==0){
                even2.push_back(target[i]);
            }
            else{
                odd2.push_back(target[i]);
            }    
        }
        sort(even1.begin(),even1.end());
        sort(even2.begin(),even2.end());
        sort(odd1.begin(),odd1.end());
        sort(odd2.begin(),odd2.end());
        for(int i=0;i<even1.size();i++){
            ans+=abs(even1[i]-even2[i])/2;
        }
        for(int i=0;i<odd1.size();i++){
            ans+=abs(odd1[i]-odd2[i])/2;
        }
        return ans/2;

    }
};