class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> hash;
        int ans = 0,left=0;
        for (int i = 0; i < s.length(); i++) {
            if (hash.find(s[i]) != hash.end()) {
                left=max(left,hash[s[i]]+1);
            }
            hash[s[i]]=i;
            ans=max(ans,i-left+1);
        }
        return ans;
    }
};