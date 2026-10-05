class Solution {
public:
    int scoreOfParentheses(string s) {
        int n=s.length();
        int count=0;
        int left=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                left++;
            }
            else{
                if(s[i]==')'&&left>0&&s[i-1]=='('){
                    count+=pow(2,left-1);
                }
                left--;
            }
        }
        return count;
    }
};