class Solution {
public:
    int maxarea(vector<int>& heights) {
        stack<int> st;
        int n=heights.size();
        int area=0;
        for (int i = 0; i <= n; i++) {
            int curr = (i == n ? 0 : heights[i]);
            while (!st.empty() && heights[st.top()] >curr) {
                int height=heights[st.top()];
                st.pop();
                int width;
                if(st.empty()){
                    width=i;
                }else{
                    width=i-st.top()-1;
                }
                area = max(area, height * width);
            }
            st.push(i);
        }
        return area;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int row = matrix.size();
        int cols = matrix[0].size();
        vector<int> heights(cols, 0);
        int area=0;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == '1') {
                    heights[j]++;
                } else {
                    heights[j] = 0;
                }
            }
            area = max(area, maxarea(heights));
        }
        return area;
    }
};