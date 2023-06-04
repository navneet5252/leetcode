class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
      int ans = INT_MIN;
      int cnt=0;
        int i=0;
        while(i<nums.size()){
            if(nums[i]==1){
                cnt++;
            }
            else{
               ans=max(ans,cnt);
                cnt=0;
            }
            i++;
            
        }
        if(cnt!=0){
            ans=max(ans,cnt);
        }
        return ans;
    }
};