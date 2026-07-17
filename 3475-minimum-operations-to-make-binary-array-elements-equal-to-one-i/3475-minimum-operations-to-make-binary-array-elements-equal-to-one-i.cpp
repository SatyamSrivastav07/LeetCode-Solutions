class Solution {
public:
    int minOperations(vector<int>& nums) {
        int l=0;
        for (int i=0;i<nums.size()-2;i++){
            if (nums[i]==0){
                nums[i]=1;
                nums[i+1]^=1;
               nums[i+2]^=1;
               l++;
            }
        }
        for (int i=0;i<nums.size();i++){if (nums[i]==0){return -1;}}
        return l;
    }
};


// class Solution {
// public:
//     int minOperations(vector<int>& nums) {
//         int l=0;
//         for (int i=0;i<nums.size()-2;i++){
//             if (nums[i]==0){
//                 nums[i]=1;
//                 if (nums[i+1]==0){nums[i+1]=1;}
//                 else {nums[i+1]=0;}
//                 if (nums[i+2]==0){nums[i+2]=1;}
//                 else {nums[i+2]=0;}
//                 l++;
//             }
//         }
//         for (int i=0;i<nums.size();i++){if (nums[i]==0){return -1;}}
//         return l;
//     }
// };