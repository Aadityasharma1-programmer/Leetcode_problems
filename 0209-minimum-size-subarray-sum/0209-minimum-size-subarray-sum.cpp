class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int sum = 0;
        int count = INT_MAX;
        int flag=0;
        for (int right = 0; right < n; right++) {
            sum += nums[right];

            while (sum >= target) {
                count = min(count, right - left + 1);
                sum -= nums[left];
                left++;
                flag=1;
            }
        }
        if(flag)
        return count;
        else return 0;
    }
};