class Solution {
public:
    int findMin(vector<int>& nums) {
        // return *min_element(nums.begin(),nums.end());
        int n=nums.size();
        int low=0;
        int right=n-1;
        while(low<=right){
            int mid=(low+right)/2;
            if(nums[mid]>nums[right]){
                low=mid+1;
            }
            else if(nums[mid]<nums[right]){
                right=mid;
            }
            else{
                right--;
            }
        }
        return nums[low];
    }
};