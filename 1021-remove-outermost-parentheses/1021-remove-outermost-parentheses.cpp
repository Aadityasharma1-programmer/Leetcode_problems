class Solution {
public:
    string removeOuterParentheses(string s) {
        // stack<char>st;
        string ans="";
        int size=0;
        for(char i:s){

            if((i=='(')){
                if(size>0)
                ans+=i;
                size++;
            }
            if((i==')')){
               
                size--;
                if(size>0)
                ans+=i;
            }
            
            
        }
        return ans;
    }
};