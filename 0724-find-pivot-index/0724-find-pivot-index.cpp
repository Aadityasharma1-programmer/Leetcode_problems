class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int sumt=0;
        for(int i:nums){
            sumt+=i;
        }
        int leftsum=0;
        for(int i=0;i<n;i++){
            if(leftsum==sumt-leftsum-nums[i]){
                return i;
            }
            leftsum+=nums[i];
        }
        return -1;
    }
};