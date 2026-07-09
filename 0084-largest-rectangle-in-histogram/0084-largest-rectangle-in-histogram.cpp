class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        int n=heights.size();
        int area=0;
        for(int i=0;i<=n;i++){
            int h = (i == n) ? 0 : heights[i];
            while(!st.empty() && h<heights[st.top()]){
                int height=heights[st.top()];
                st.pop();
                int width=st.empty()?i:i-st.top()-1;
                area=max(area,width*height);
            }
            st.push(i);
        }
        return area;
    }
};