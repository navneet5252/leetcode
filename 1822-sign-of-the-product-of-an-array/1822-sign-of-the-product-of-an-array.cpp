class Solution {
public:
    int modulo = INT_MAX;
    int arraySign(vector<int>& nums) {
        for(auto it:nums){
            if(it==0){
              return 0;
            }
        }
        long long ans=1;
        for(auto it:nums){
          ans= (ans*it) % modulo ;
        }
        if(ans>0){
          return 1;
        }
        return -1;
    }
};