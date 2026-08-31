class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.length();
        int m=s2.length();
        if(n>m)return false;
        vector<int>freqs1(26,0);
        vector<int>freqs2(26,0);
        for(int i=0;i<n;i++){
            freqs1[s1[i]-'a']++;
        }
        int left=0;
        for(int i=0;i<m;i++){
            freqs2[s2[i]-'a']++;
            if(i-left+1>n){
                freqs2[s2[left]-'a']--;
                left++;
            }
            if(i-left+1==n){
                if(freqs1==freqs2){
                    return true;
                }
            }
        }
        return false;
    }
};