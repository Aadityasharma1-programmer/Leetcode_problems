const long long MOD = 1e9 + 7;
class Solution {
public: 
    long long ways(long long n,long long even_pos){
        long long answer=1;
        while(even_pos>0){
            if(even_pos%2!=0){
                answer=(answer*n)%MOD;
            }
            n=(n*n)%MOD;
            even_pos/=2;
        }
        return answer;
    }
    int countGoodNumbers(long long n) {
        long long even_pos=(n+1)/2;
        long long odd_pos=n/2;
        long long ans=(ways(5,even_pos)*ways(4,odd_pos))%MOD;
        return ans;
    }
};