class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int left = 0;
        int odd = 0;
        int even = 0;
        int ans = 0;

        for (int right = 0; right < nums.size(); right++) {

            if (nums[right] % 2 != 0) {
                odd++;
                even = 0;
            }

            while (odd > k) {
                if (nums[left] % 2 != 0)
                    odd--;

                left++;
            }

            if (odd == k) {

                while (nums[left] % 2 == 0) {
                    even++;
                    left++;
                }

                ans += even + 1;
            }
        }

        return ans;
    }
};