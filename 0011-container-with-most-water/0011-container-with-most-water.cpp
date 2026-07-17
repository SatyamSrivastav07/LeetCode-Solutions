class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxi=0,left=0,right=n-1;

        
        
            while(left<right){
                    int W = right-left;
                    int minH = min(height[right],height[left]);                    
                    maxi=max(maxi,W*minH);
                    (height[left]>=height[right]) ? right-- : left++ ;
            }
        return maxi;    

        

        
    }
};