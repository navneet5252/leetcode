class Solution {
public:
string reverseString(string s){
    int start = 0,end= s.length()-1;
    
    while(start<=end){
        swap(s[start++],s[end--]);
    }
    return s;
}
    bool isPalindrome(string s) {
        string toCompare="";
        bool ans=false;
        for(int i = 0;i<s.length();i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A'  && s[i]<='Z')||(s[i]>='0' && s[i]<='9')){
                if(s[i]>='A'  && s[i]<='Z'){
                   
                  int d = (s[i]-'A');
                  char ch = ('a'+ d);
                  toCompare.push_back(ch);

                }
               
                else if((s[i]>='0' && s[i]<='9')||(s[i]>='a' && s[i]<='z')){
                       toCompare.push_back(s[i]);
                }
            }
        }
        string rev = reverseString(toCompare);
        if(rev == toCompare){
            ans=true;
        }
        return ans;
      
    }
};