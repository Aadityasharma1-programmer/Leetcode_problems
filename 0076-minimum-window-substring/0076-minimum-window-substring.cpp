class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.length();
        int m=t.length();
        if(m>n)return "";
        unordered_map<char,int>need;
        unordered_map<char,int>window;
        for(char c:t){
            need[c]++;
        }
        int left=0;
        int have=0;
        int start=0;
        int mini=INT_MAX;
        for(int right=0;right<s.size();right++){
            char c=s[right];
            window[c]++;
            if(need.count(c)&&window[c]==need[c]){
                have++;
            }
            while(have==need.size()){
                if(right-left+1<mini){
                    mini=right-left+1;
                    start=left;
                }
                char re=s[left];
                window[s[left]]--;
                if(need.count(re)&&window[re]<need[re]){
                    have--;
                }
                left++;
            }
        }
        if (mini == INT_MAX)
            return "";

        return s.substr(start, mini);
    }
};