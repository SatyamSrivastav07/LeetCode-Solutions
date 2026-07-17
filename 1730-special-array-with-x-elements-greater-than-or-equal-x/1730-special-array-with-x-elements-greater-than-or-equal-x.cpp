class Solution {
public:
    int specialArray(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<=nums.size();i++){
            cnt=0;
            for(int j=0;j<nums.size();j++){
                if(i<=nums[j]){
                    cnt++;
                }
                cout<<cnt<<endl;
            }
            if(cnt==i)  return i;
        }
        return -1;
    }
};