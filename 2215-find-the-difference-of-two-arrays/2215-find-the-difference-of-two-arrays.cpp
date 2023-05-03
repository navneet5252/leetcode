class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
       vector<vector<int>>ans;
        set<int>st;
        // for(int i=0;i<nums1.size();i++){
        //   copy.push_back(nums1[i]);
        // }
      for(int i=0;i<nums1.size();i++){
          bool flag=true;
        for(int j=0;j<nums2.size();j++){
            if(nums1[i]==nums2[j]){
              flag=false;
              break;
            }
        }
          if(flag){
            st.insert(nums1[i]);
          }
      }
        vector<int>vec;
        for(auto it:st){
          vec.push_back(it);
        }
        ans.push_back(vec);
        vec.erase(vec.begin(),vec.end());
        st.erase(st.begin(),st.end());
        for(int i=0;i<nums2.size();i++){
          bool flag=true;
           for(int j=0;j<nums1.size();j++){
            if(nums2[i]==nums1[j]){
              flag=false;
              break;
            }
        }
            if(flag){
              st.insert(nums2[i]);
            }
        }
         for(auto it:st){
          vec.push_back(it);
        }
         ans.push_back(vec);
        return ans;
    }
};