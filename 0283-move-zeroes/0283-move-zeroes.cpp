class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     stack<int>st;
        int zerocnt=0;
      for(int i=nums.size()-1;i>=0;i--){
          if(nums[i]==0){
              zerocnt++;
          }
          st.push(nums[i]);
      }
        
           int i=0;
        while(st.size()!=0){
            if(st.top()!=0){
                nums[i] = st.top();
                i++;
                
            }
            st.pop();
        }
        while(zerocnt--){
            nums[i]=0;
            i++;
        }
        
        
    }
};