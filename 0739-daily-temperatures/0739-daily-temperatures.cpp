class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int count_days = 0;
        int n = temperatures.size();
        stack<int>st;
        vector<int> result(n, 0);
        for (int i = 0; i < n; i++) {
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                result[st.top()] = i - st.top();
                st.pop();
            }
            st.push(i);
        }
        return result;
    }
};