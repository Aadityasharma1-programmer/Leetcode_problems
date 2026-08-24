class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        // int r=0,w=0,b=0;
        // for(int i=0;i<n;i++){
        //     if(nums[i]==0)r++;
        //     if(nums[i]==1)w++;
        //     if(nums[i]==2)b++;
        // }
        // int j=0;
        // while(r--)nums[j++]=0;
        // while(w--)nums[j++]=1;
        // while(b--)nums[j++]=2;
        int low=0,mid=0,high=n-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }else if(nums[mid]==1){
                mid++;
            }else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};