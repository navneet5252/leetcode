class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int i=0;
       int prevheight = 0;
        int ans=0;
        while(i<gain.size()){
            int h = prevheight+gain[i];
            ans=max(ans,h);
            prevheight = h;
            i++;
        }
      
        return ans;
        
    }
};