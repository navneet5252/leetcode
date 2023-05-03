class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
      set<int>st;
        vector<vector<int>>ans(2,vector<int>(0));
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0,j=0;
        while(i<nums1.size() && j<nums2.size()){
           if(nums1[i]>nums2[j]){
               j++;
           }
            else if(nums1[i]<nums2[j]){
                st.insert(nums1[i]);
                i++;
            }
            else{
                i++;
            }
        }
        while(i<nums1.size()){
           st.insert(nums1[i++]);
        }
        for(auto it:st){
            ans[0].push_back(it);
        }
        st.erase(st.begin(),st.end());
        i=0,j=0;
        while(i<nums2.size() && j<nums1.size()){
            if(nums2[i]<nums1[j]){
                st.insert(nums2[i]);
                i++;
            }
            else if(nums2[i]>nums1[j]){
                j++;
            }
            else{
              i++;
            }
        }
         while(i<nums2.size()){
           st.insert(nums2[i++]);
        }
         for(auto it:st){
            ans[1].push_back(it);
        }
        
        return ans;
    }
};