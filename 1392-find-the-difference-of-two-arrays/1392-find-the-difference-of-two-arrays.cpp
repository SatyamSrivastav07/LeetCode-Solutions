class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int>mpp1,mpp2;
        vector<vector<int>>answer(2);
        for(int i=0;i<nums1.size();i++){
            auto it = std::find(nums2.begin(), nums2.end(),nums1[i] );
            if(it==nums2.end() && mpp1[nums1[i]]!=-1 )
               answer[0].push_back(nums1[i]); 
               mpp1[nums1[i]]=-1; 
        }
        for(int i=0;i<nums2.size();i++){
            auto it = std::find(nums1.begin(), nums1.end(),nums2[i] );
            if(it==nums1.end() && mpp2[nums2[i]]!=-1)
               answer[1].push_back(nums2[i]);  
               mpp2[nums2[i]]=-1; 
        }
    return answer;
    }
};