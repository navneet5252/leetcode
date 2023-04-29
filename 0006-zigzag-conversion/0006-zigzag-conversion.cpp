class Solution {
public:
    string convert(string s, int numRows) {
         if(numRows==1){
           return s;
         }
        vector<string>vec(numRows);
        int i =0;
        string ans="";
        bool check =  true; //true for downword direction
        for(int j = 0;j<s.length();j++){
            vec[i].push_back(s[j]);
           if(i== numRows-1){
            
               check = false;
               i--;
           }
            else if(i==0){
              
               check = true;
               i++;
            }
            else if(check){

                i++;
            }
            else if(check==false){
             
                i--;
            }
        }
       for(auto it:vec){
         ans+=it;   
       }
        return ans;
    }
};