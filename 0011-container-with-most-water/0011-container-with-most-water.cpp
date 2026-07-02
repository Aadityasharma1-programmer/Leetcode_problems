class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=0;
        int highest=0;
        int n=height.size();
        int left=0;
        int right=n-1;
        
        while(left<right){
                highest=min(height[right],height[left])*(right-left);
                if(area<highest){
                area=highest;
            }
            if(height[left]<height[right])
                left++;
            else
                right--;

            
            
        }
        return area;
    }
};