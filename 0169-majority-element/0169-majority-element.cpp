class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        // voting algorithm
        int cnt=0;
        int ele =0;
        for(auto it:nums){
            if(cnt==0){
                ele = it;
            }
            if(ele == it) cnt++;
            else{
               cnt--;   
             }
        }
        return ele;
    }
};