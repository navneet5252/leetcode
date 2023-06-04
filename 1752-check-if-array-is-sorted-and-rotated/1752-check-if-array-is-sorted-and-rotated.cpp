class Solution {
public:
    bool isSorted(vector<int>nums){
        for(int i=1;i<nums.size();i++){
          if(nums[i]<nums[i-1]){
             return false;
          }
        }
        return true;
    }
    int findValleyIndex(vector<int>nums){
        int index=-1;
         for(int i=1;i<nums.size();i++){
          if(nums[i]<nums[i-1]){
             index =i;
          }
        }
        return index;
    }
    bool check(vector<int>& nums) {
         if(isSorted(nums)){
            return true;
         }
        int indexOfValley = findValleyIndex(nums);
        vector<int>ans;
        int i=indexOfValley;
         ans.push_back(nums[i]);
          i++;
        while((i%nums.size())!=indexOfValley){
            int index = i%nums.size();
             ans.push_back(nums[index]);
             i++;
        }
        if(isSorted(ans)){
            return true;
        }
        return false;
    }
};