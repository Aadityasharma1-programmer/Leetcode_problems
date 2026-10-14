class Solution {
public:
    vector<int> minInterval(vector<vector<int>>& intervals,
                            vector<int>& queries) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        vector<pair<int, int>> q;
        for (int i = 0; i < queries.size(); i++) {
            q.push_back({queries[i], i});
        }
        sort(q.begin(),q.end());
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        int i = 0;
        vector<int>ans(queries.size());
        for (auto [x, index] : q) {
            while (i < n && intervals[i][0] <= x) {
                int len = intervals[i][1] - intervals[i][0] + 1;
                int start = intervals[i][0];
                int end = intervals[i][1];
                pq.push({len, intervals[i][1]});
                i++;
            }
            while(!pq.empty()&&pq.top().second<x){
                pq.pop();
            }
            if (!pq.empty()) {
                ans[index] = pq.top().first;
            }else{
                ans[index] =-1;

            }


        }
        return ans;

        // TLE
        // int n = intervals.size();
        // vector<int> ans;
        // for (int x : queries) {
        //     int mini = INT_MAX;
        //     int found = 0;

        //     for (int i = 0; i < n; i++) {
        //         int start = intervals[i][0];
        //         int end = intervals[i][1];
        //         if (start <= x && x <= end) {
        //             mini = min(mini, end - start + 1);
        //             found = 1;
        //         }
        //     }

        //     if (found) {
        //         ans.push_back(mini);
        //     } else {
        //         ans.push_back(-1);
        //     }
        // }
        // return ans;
    }
};