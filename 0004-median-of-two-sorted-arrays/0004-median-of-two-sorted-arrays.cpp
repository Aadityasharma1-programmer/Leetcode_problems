class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        vector<int>ans;
        for(int i=0;i<m;i++){
            int b=nums1[i];
            ans.push_back(b);
        }
        for(int i=0;i<n;i++){
            int b=nums2[i];
            ans.push_back(b);
        }
        sort(ans.begin(),ans.end());
        int c=(m+n);
        if(c%2==0){
            return (ans[c/2]+ans[c/2-1])/2.0;
            
        }
        return (ans[c/2]);



    }
};