class Solution {
public:
    int longestValidParentheses(string s) {
        int n=s.length();
        int ans=0;
        int left=0,right=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(')left++;
            if(s[i]==')')right++;
            if(left==right){
                ans=max(ans,2*right);
            }else if(right>left){
                left=right=0;
            }
        }
        left=right=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='(')left++;
            if(s[i]==')')right++;
            if(left==right){
                ans=max(ans,2*left);
            }else if(left>right){
                left=right=0;
            }
        }
        return ans;
    }
};