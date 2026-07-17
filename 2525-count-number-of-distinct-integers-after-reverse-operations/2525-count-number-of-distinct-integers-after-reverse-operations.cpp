class Solution {
public:
int reverseDigits(int num) 
{ 
    int rev_num = 0; 
        while (num > 0) { 
                rev_num = rev_num * 10 + num % 10; 
                        num = num / 10; 
                            } 
                                return rev_num; 
                                } 
    int countDistinctIntegers(vector<int>& nums) {
        unordered_map<int,int> m;
        int ans=0;
        int n= nums.size();
        for(int i=0;i<n;i++){
            nums.push_back(reverseDigits(nums[i]));
            cout<<reverseDigits(nums[i])<<" ";
        }
        for(int i=0;i<2*n;i++){
            if (m.find(nums[i]) != m.end())
                    ans++;
            m[nums[i]]++;
        }
        return 2*n-ans;
    }
};