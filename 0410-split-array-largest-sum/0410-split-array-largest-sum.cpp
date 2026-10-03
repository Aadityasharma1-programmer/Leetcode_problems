class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid=(low+high)/2;
            int sum=0;
            int parts=1;
            for(int i:nums){
                if(sum+i>mid){
                    sum=i;
                    parts++;
                }else{
                    sum+=i;
                }
            }
            if(parts>k){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return low;

    }
};