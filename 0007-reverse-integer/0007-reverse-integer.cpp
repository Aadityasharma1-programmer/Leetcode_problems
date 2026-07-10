class Solution {
public:
    int reverse(int x) {
        int n=x;
        long long rev=0;
        while(n!=0){
            int a=n%10;
            rev=rev*10+a;
            n=n/10;
            if(rev<INT_MIN || rev>INT_MAX)return 0;
           
        }
        if(x<0){
             return (int)rev;
            }else
            return (int) rev;
    }
};