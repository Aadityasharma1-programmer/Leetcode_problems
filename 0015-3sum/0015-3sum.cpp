class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        int i=0,j=0,k=0;
        int sum=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            j=i+1;
            k=n-1;
            while(j<k){
                sum=nums[i]+nums[j]+nums[k];
                if(sum>0){
                    k--;
                }else if(sum<0){
                    j++;
                }else{
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j<n&&nums[j]==nums[j-1]){
                        j++;
                    }
                    while(k>j && nums[k]==nums[k+1]){
                        k--;
                    }
                }
            }
        }
        return ans;
    }
};