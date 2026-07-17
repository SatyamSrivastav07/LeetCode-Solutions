class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int> nums(n+m);
        int in=0;
        int l=0;
        int r=0;
        // while(l<n && r<m){
        //     if(nums1[l]<=nums2[r]) {
        //         nums[in++]=nums1[l++];
        //     }
        //     else    nums[in++]=nums2[r++];
        // }
        // while(l<n) {
        //     nums[in++]=nums1[l++];
        // }
        // while(r<m) {
        //     nums[in++]=nums2[r++];
        // }
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),nums.begin());
        sort(nums.begin(),nums.end());
        double ans;
        int mid=(n+m)/2;
        if((n+m)%2==0) {
            ans=(nums[mid]+nums[mid-1])/2.0;
        }
        else    ans=nums[mid];
        return ans;
    }
};