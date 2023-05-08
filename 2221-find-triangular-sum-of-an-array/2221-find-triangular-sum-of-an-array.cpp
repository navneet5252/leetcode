class Solution {
public:
    int triangularSum(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
      
          vector<int>vec;
          int i =0,j=1;
           while(j<nums.size()){
                int sum = (nums[i++]+nums[j++])%10;
                vec.push_back(sum);
            }
        return triangularSum(vec);
           
        
    }
};