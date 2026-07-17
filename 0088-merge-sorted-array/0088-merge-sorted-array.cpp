class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> arr;
        int i = 0, j = 0, k = 0,a,b;
        arr=nums1;
        while (i < m && j < n) {
            a = arr[i];
            b = nums2[j];
             if (a < b) {
                nums1[k] = a;
                i++;
            }
            else {
                nums1[k] = b;
                j++;
            } 
            k++;
        }
        if (i == m ) {
            while (j < n) {
                nums1[k] = nums2[j];
                j++, k++;
            }
        } else {
            while (i < m) {
                nums1[k] = arr[i];
                i++, k++;
            }
        }  
    }
};





