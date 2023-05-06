class Solution {
public:
       int mod = 1e9 + 7;
    int numSubseq(vector<int>& nums, int target) {
     
        int low = 0 ,high = nums.size()-1;
        int ans = 0;
        sort(nums.begin(),nums.end());
        vector<int>power(nums.size());
        power[0]=1;
        for(int i=1;i<power.size();++i){
          power[i] =( power[i-1]*2 )% mod;
        }
        while(low<=high){
          if(nums[low]+nums[high] <= target){
              int diff = (high-low)%mod;
            ans=(ans%mod + power[diff]%mod) % mod;
              low++;
          }
            else{
               high--;
            }
        }
        return ans;
    }
};