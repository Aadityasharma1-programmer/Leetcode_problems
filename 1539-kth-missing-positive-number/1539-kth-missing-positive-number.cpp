class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int b=1;
        vector<int>ans;
        int i=0;
        while(i<n){
            if(arr[i]==b){
                b++;
                i++;
            }else{
                ans.push_back(b);
                b++;
            }
        }
         while (ans.size() < k) {
            ans.push_back(b);
            b++;
        }
        return ans[k-1];
    }
};