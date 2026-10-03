class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        while(low<high){
            int mid=(low+high)/2;
            int days_need=1;
            int weight=0;
            for(int i:weights){
                if(weight+i>mid){
                    days_need++;
                    weight=i;
                }else{
                    weight+=i;
                }
            }
            if(days_need>days){
                low=mid+1;
            }else{
                high=mid;
            }

        }
        return low;
        
    }
};