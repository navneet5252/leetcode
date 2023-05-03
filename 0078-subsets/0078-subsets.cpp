class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>vec;
        int n = nums.size();
        int subset_cnt = (1<<n);
        for(int mask = 0;mask<subset_cnt;++mask){
          vector<int>subset;
            for(int i=0;i<n;i++){
              if((mask&(1<<i))!=0){
                 subset.push_back(nums[i]);
              }
            }
            vec.push_back(subset);
        }
      return vec;
    }
};