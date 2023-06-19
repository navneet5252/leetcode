class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>net_Alt;
        net_Alt.push_back(0);
        int i=0;
       int prevheight = 0;
        while(i<gain.size()){
            int h = prevheight+gain[i];
            net_Alt.push_back(h);
            prevheight = h;
            i++;
        }
        int largest_altitude = 0;
        for(auto it:net_Alt){
            largest_altitude=max(largest_altitude,it);
        }
        return largest_altitude;
        
    }
};