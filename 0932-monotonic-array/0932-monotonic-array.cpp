class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int> arr1;
        arr1=nums;
        sort(arr1.begin(),arr1.end());
        vector<int> arr2;
        arr2=nums;
        sort(arr2.begin(),arr2.end(),greater<int>());
        if(arr1==nums || arr2==nums)    return true;
        return false;
        
    }
};