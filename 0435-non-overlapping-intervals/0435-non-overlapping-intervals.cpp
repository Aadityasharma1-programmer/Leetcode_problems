class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end(),[](vector<int>&a,vector<int>&b){
            return a[1]<b[1];
        });
        int start=intervals[0][0];
        int end=intervals[0][1];
        int count=0;
        for(int i=1;i<n;i++){
            if(intervals[i][0]>=end){
                end=intervals[i][1];
            }else{
                count++;
            }
        }
        return count;
    }
};