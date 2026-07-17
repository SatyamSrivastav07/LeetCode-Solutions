class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        sort(beans.begin(),beans.end());
        long long sum=0;
        for(auto a : beans){
            sum+=a;
        }
        long long ans=LLONG_MAX;
        for(int i=0;i<beans.size();i++) {
            // ans=min(ans,sum-(beans.size()-i)*beans[i]);
            if(ans>sum-(beans.size()-i)*beans[i])   ans=sum-(beans.size()-i)*beans[i];
        }
        return ans;
    }
};


// ()

// 1->sort
// 2-> rest number eqqual to my current pointers number of beans required
//    1st  Iteation

// 1 4 5 6=====> 1 1 1 1======> ans=12
//  arr[0]=1
//  try to convert all the number from index 0 to last => arr[0]....
 

// 2nd iteration
// 1 4 5 6==> 0 4 4 4 =>4
// arr[1]=4 
// try to convert all the number from index 0 to last => arr[4]....
