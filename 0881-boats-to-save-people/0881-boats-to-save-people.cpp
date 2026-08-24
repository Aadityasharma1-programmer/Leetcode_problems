class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n=people.size();
        int left=0,right=n-1;
        sort(people.begin(),people.end());
        int count=0;
        while(left<right){
            int sum=people[left]+people[right];
            if(sum>limit){
                count++;
                right--;
            }else{
                count++;
                left++;
                right--;
            }
        }
        if(left == right)
            count++;

        return count;
    }
};