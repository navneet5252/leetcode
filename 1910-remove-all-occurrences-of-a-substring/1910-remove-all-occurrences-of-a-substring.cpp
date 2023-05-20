class Solution {
    void solve(string &s, string &part){
        auto it=s.find(part);
         if(it==string::npos){
           return;
         }
        else{
              s.erase(it,part.length());
        }
      
          
    
        solve(s,part);
    }
public:
    string removeOccurrences(string s, string part) {
      // string ans="";
      solve(s,part);
      return s;
    }
};