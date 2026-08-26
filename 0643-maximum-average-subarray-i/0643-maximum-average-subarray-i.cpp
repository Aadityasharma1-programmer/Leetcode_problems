class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int left=0;
        int right=n-1;
        int sum=0;
        double ans=INT_MIN;
        for(int right=0;right<n;right++){
            sum+=nums[right];
            if(right-left+1==k){
                double av=(double)sum/k;
                ans=max(ans,av);
                sum-=nums[left];
                left++;
            }
        }
        return ans;
        }
    
};