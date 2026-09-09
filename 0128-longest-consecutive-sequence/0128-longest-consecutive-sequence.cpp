class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>st(nums.begin(),nums.end());
        int ans=1;
        int maxi=0;
        if(n==0)return 0;
        for(int x:st){
            if(st.find(x-1)==st.end()){
                int start=x;
                int count=1;
                while(st.find(start+1)!=st.end()){
                    count++;
                    start++;
                }
                ans=max(ans,count);
            }
            
        }
        return ans;
    }
};