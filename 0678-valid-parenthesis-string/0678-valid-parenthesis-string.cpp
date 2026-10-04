class Solution {
public:
    bool checkValidString(string s) {
        int n=s.length();
        int low=0,high=0;
        for(char i:s){
            if(i=='('){
                low++;
                high++;
            }
            else if(i==')'){
                low--;
                high--;
                if(high<0){
                    return false;
                }
            }else{
                low--;
                high++;
            }
            low=max(0,low);

        }
        return low==0;
        
    }
};