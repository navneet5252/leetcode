class Solution {
public:
    string replaceDigits(string s) {
    
        if(s.length()==1){
            return s;
        }
       int i=1;
       while(i<s.length()){
           s[i] = s[i-1] + (s[i]-'0');
           i=i+2;
       }
        return s;
    }
};