class Solution {
public:
    int triangularSum(vector<int>& nums) {
       
        while(nums.size()!=1){
           vector<int>vec;
            int i =0,j=1;
            while(j<nums.size()){
                int sum = (nums[i++]+nums[j++])%10;
                vec.push_back(sum);
            }
            nums.erase(nums.begin(),nums.end());
            copy(vec.begin(),vec.end(),back_inserter(nums));
        }
        return nums[0];
    }
};