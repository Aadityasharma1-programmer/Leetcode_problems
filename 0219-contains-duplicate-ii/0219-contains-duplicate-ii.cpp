class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>lastseen;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(lastseen.find(nums[i])!=lastseen.end()){
                if(i-lastseen[nums[i]]<=k){
                    return true; 
                }
            }
            lastseen[nums[i]]=i;
        }
        return false;
    }
};