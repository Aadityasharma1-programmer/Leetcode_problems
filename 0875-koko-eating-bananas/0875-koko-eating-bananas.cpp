class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        while(low<high){
            int mid=(low+high)/2;
            int hours=0;
            for(int bananas:piles){
                hours+=(bananas+mid-1)/mid;
            }
            if(hours>h){
                low=mid+1;
            }else{
                high=mid;
            }
        }
        return low;
    }
};