class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=s.size();
        int m=p.size();
        vector<int>ans;
        vector<int>freqp(26,0);
        vector<int>freqs(26,0);
        if(m>n)return ans;
        int left=0;
        for(int i=0;i<m;i++){
            freqp[p[i]-'a']++;
        }
        for(int right=0;right<n;right++){
            freqs[s[right]-'a']++;
            if(right-left+1>m){
                freqs[s[left]-'a']--;
                left++;
            }
            if(right-left+1==m){
                if(freqp==freqs){
                    ans.push_back(left);
                }
            }
        }
        return ans;
    }
};