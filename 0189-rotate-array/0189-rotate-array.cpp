class Solution {
public:
 
    void rotate(vector<int>& nums, int k) {
     deque<int>dq;
      for(auto it:nums){
        dq.push_back(it);
       }

       while(k--){
        int lastele = dq[dq.size()-1];
         dq.pop_back();
         dq.push_front(lastele);
        
        }
    for(int i=0;i<dq.size();i++){
        nums[i] = dq[i];
    }
       
    }
};