class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int b=1;
        int a;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0 && nums[i]!=a){
                a=nums[i];
                if(a==b ){
                    b++;
                }
                else{
                    return(b);
                    break;
                }
            }

        }
        return b;
    }
};