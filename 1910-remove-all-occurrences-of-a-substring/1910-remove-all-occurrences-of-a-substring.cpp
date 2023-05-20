class Solution {
    void solve(string &s, string &part){
         if(s.find(part)==string::npos){
           return;
         }
        
        if(s.find(part)!=string::npos){
            s.erase(s.find(part),part.length());
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