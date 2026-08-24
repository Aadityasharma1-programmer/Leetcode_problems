class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            ans[i]=a*a;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};