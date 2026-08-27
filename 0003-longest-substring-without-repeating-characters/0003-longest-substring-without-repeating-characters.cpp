class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int ans=0,left=0;
        unordered_map<char,int>hash;
        for(int i=0;i<n;i++){
            if(hash.find(s[i])!=hash.end()){
                left=max(left,hash[s[i]]+1);
            }
            hash[s[i]]=i;
            ans=max(ans,i-left+1);
        }
        return ans;
    }
};