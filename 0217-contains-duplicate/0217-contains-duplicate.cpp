class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>st;
      for(auto it:nums){
         st.insert(it);
      }
        if(nums.size()>st.size()){
            return true;
        }
        return false;
    }
};