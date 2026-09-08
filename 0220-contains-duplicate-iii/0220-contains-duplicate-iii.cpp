class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        int n=nums.size();
        set<long long>st;
        for(int i=0;i<n;i++){
            if(i>indexDiff){
                st.erase(nums[i-indexDiff-1]);
            }
            auto it=st.lower_bound((long long)nums[i]-valueDiff);
            if(it!=st.end()&&*it<=(long long)nums[i]+valueDiff){
                return true;
            }
            st.insert(nums[i]);
        }
        return false;
    }
};