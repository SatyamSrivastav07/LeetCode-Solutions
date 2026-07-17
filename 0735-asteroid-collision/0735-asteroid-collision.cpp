class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
         stack<int>s;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            while(!s.empty() && nums[i]<0 && s.top()>0)  
            {
                int magnitude=s.top()+nums[i]; 
                if(magnitude<0) s.pop();
                else if(magnitude>0) nums[i]=0;
                else{
                    s.pop();
                    nums[i]=0;
                }
            }
            if(nums[i]) s.push(nums[i]);
        }
        while(!s.empty())
        {
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};