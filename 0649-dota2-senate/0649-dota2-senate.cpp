class Solution {
public:
    string predictPartyVictory(string senate) {
        int i=0,j=1;
        while(i<senate.length() && j<senate.length()){
            if(senate[i] == senate[j]){
              j++; 
            }
            else{
              senate.erase(senate.begin()+j);
                senate.push_back(senate[i]);
                senate.erase(senate.begin());
                i=0,j=i+1;
            }
        }
         if(senate[0]=='R'){
             return "Radiant";
         }
        return "Dire";
    }
};