class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=0;
        long long maxarea=0;
        int left=0;
        int right=height.size()-1;
        while(left<right){
            maxarea=(min(height[left],height[right]))*(right-left);
            if(maxarea>area){
                area=maxarea;
            }
            if(height[left]<height[right])left++;
            else right--;
        }
        return area;

    }
};