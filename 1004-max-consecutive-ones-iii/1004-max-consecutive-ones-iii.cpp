class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int zero=0;
        int start=0;
        int ans=0;
        for(int end=0;end<n;end++){
            if(nums[end]==0){
                zero++;
            }
            while(zero>k){
                if(nums[start]==0){
                    zero--;
                }
                start++;
            }
            ans=max(ans,end-start+1);
        }
        return ans;
    }
};