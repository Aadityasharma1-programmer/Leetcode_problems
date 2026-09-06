class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        int ans=0;
        unordered_map<int,int>hash;
        hash[0]= 1;
        for(int i:nums){
            sum+=i;
            if(hash.find(sum-k)!=hash.end()){
                ans += hash[sum-k];
            }
            hash[sum]++;
        }
        return ans;
    }
};