class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int r=0,w=0,b=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0)r++;
            if(nums[i]==1)w++;
            if(nums[i]==2)b++;
        }
        int j=0;
        while(r--)nums[j++]=0;
        while(w--)nums[j++]=1;
        while(b--)nums[j++]=2;
    }
};