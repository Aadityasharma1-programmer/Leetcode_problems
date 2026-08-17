class Solution {
public:
    vector<vector<int>>ans;
    void backtrack(vector<int>&nums,int n,vector<int>&current){
        if(n==nums.size()){
            ans.push_back(current);
            return;
        }
        backtrack(nums,n+1,current);
        current.push_back(nums[n]);
        backtrack(nums,n+1,current);
        current.pop_back();
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        ans.clear();
        vector<int>current;
        backtrack(nums,0,current);
        return ans;
    }
};