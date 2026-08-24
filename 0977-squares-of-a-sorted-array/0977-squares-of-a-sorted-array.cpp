class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // int n=nums.size();
        // vector<int>ans(n);
        // for(int i=0;i<nums.size();i++){
        //     int a=nums[i];
        //     ans[i]=a*a;
        // }
        // sort(ans.begin(),ans.end());
        // return ans;
        int n=nums.size();
        int i=0,j=n-1;
        vector<int>ans(n);
        int k=n-1;
        while(i<=j){
            if(nums[i]*nums[i]>nums[j]*nums[j]){
                ans[k]=nums[i]*nums[i];
                i++;
            }else{
                ans[k]=nums[j]*nums[j];
                j--;
            }
            k--;
        }
        // if(i<j)
        // ans[k]=nums[i]*nums[i];
        // else
        // ans[k]=nums[j]*nums[j];
        return ans;
    }
};