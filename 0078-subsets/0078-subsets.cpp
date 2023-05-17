class Solution {
     private:
    void solve(vector<int>nums,int i,vector<int>vec,vector<vector<int>>& ans){
       //base case
        if(i>=nums.size()){
            ans.push_back(vec);
            return;
        }
        
        //exclude
        solve(nums,i+1,vec,ans);
        
        //include
        int digit = nums[i];
        vec.push_back(digit);
        solve(nums,i+1,vec,ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int>>ans;
        vector<int>vec;
        int i=0;
        solve(nums,i,vec,ans);
        return ans;
    }
};