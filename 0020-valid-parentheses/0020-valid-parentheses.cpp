class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            char c=s[i];
            if(c=='['|| c=='('||c=='{'){
                st.push(s[i]);
            }
            else{
                if(st.empty()) return false;
                char topi=st.top();
                st.pop();
                if ((c==']' && topi!='[') || (c==')' && topi!='(') ||(c=='}' && topi!='{')) {
                    return false;
                }
            }

        }
        return st.empty();
    }
};