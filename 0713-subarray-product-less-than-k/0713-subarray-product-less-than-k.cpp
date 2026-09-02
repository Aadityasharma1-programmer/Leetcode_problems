class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        long long multi=1;
        long long ans=0;
        int left=0;
        for(int i=0;i<n;i++){
            multi*=nums[i];
            while(multi>k&&left<n){
                multi/=nums[left];
                left++;
            }
            if(multi<k)
            ans+=i-left+1;
        }
        return ans;
    }
};