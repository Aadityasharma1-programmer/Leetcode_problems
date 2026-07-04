class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        int i, j, k, sum = 0;

        sort(nums.begin(), nums.end());
        for (i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            j = i + 1;
            k = n - 1;
            while (j < k) {
                sum = nums[i] + nums[j] + nums[k];
                if (sum < 0) {
                    j++;
                } else if (sum > 0) {
                    k--;
                } else {
                    vector<int> res = {nums[i], nums[j], nums[k]};
                    j++;
                    k--;
                    while (j < k && nums[j] == nums[j - 1]) {
                        j++;
                    }
                    while (j < k && nums[k] == nums[k + 1]) {
                        k--;
                    }
                    ans.push_back(res);
                }
            }
        }
        return ans;
    }
};