class Solution {
public:
    int possible(vector<int>& bloomDay, int day, int m, int k) {
        int flowers = 0;
        int bouquets = 0;
        for (int i : bloomDay) {
            if (i <= day) {
                flowers++;
                if (flowers == k) {
                    bouquets++;
                    flowers = 0;
                }
            } else {
                flowers = 0;
            }
        }
        return bouquets >= m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if ((long long)m * k > n)
            return -1;
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        while (low < high) {
            int mid = (low + high) / 2;
            if (possible(bloomDay, mid, m, k)) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};