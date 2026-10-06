class Solution {
public:
    int minAddToMakeValid(string s) {
        int left=0;
        int ans=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                left++;
            }
            if(s[i]==')'&&left>0){
                    left--;
            }else if(s[i]==')'&&left==0){
                ans++;
            }
            
        }
        return ans+left;
    }
};