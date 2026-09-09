class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>>a;
        vector<int>ans;
        for(auto& i:mp){
            a.push_back({i.first,i.second});
        }
        sort(a.begin(),a.end(),[](auto &c,auto &b){
            return c.second>b.second;
        });
        for(int i=0;i<k;i++){
            ans.push_back(a[i].first);
            
        }
        return ans;
    }
};