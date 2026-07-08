class Solution {
public:
    string convert(string s, int numRows) {
        int n=numRows;
        if (numRows == 1 || numRows >= s.size()) return s; 
        vector<string>rows(n);
        bool godown=false;
        int currow=0;
        for(char c:s){
            rows[currow]+=c;
            if(currow==0 || currow==n-1){
                godown=!godown;
            }
            currow+=godown?1:-1;

        }
        string result;
        for(string& row:rows){
            result+=row;
        }
        return result;
    }
};