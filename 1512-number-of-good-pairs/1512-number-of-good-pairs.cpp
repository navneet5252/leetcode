class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int cnt=0;
        int i=0;
        while(i<nums.size()){
            int j=i+1;
            while(j<nums.size()){
                if(nums[i]==nums[j]){
                    cnt++;
                }
                j++;
            }
            i++;
        }
        return cnt;
    }
};