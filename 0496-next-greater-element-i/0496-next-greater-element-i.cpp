class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        int n=nums2.size();
        int m=nums1.size();
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            while(!st.empty()&&st.top()<nums2[i]){
                mp[st.top()]=nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }
        for(int i:nums1){
            if(mp.find(i)!=mp.end())
            ans.push_back(mp[i]);
            else{
            ans.push_back(-1);
                
            }
        }
        return ans;

    }
};