class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int skips=0,skipt=0;
        int n1=s.length(),n2=t.length();
        string a1="",a2="";
        for(int i=n1-1;i>=0;i--){
            if(s[i]=='#'){
                skips++;
                
            }
            else {
                if(skips>0){
                    skips--;
                    
                }else{
                    a1+=s[i];
                }
            }

        }
        for(int i=n2-1;i>=0;i--){
            if(t[i]=='#'){
                skipt++;
                
            }
            else {
                if(skipt>0){
                    skipt--;
                    
                }else{
                    a2+=t[i];
                }
            }

        }
        if(a1==a2)return true;
        else return false;
    }
};