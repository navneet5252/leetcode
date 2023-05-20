class Solution {
    private:
      void rev(string &s,int start,int end){
          //base case
          if(start>=end){
              return;
          }
          swap(s[start++],s[end--]);
          
          rev(s,start,end);
      }
    void add(string num1,int i ,string num2,int j,int carry,string &ans){
         //base case
          if(i<0 &&j<0){
              if(carry!=0){
                  ans.push_back(carry+'0');
              }
              return;
          }
        
        int val1 = (i>=0? num1[i]:'0') - '0';
        int val2 = (j>=0?num2[j]:'0')-'0';
        int sum = val1+val2+carry;
        char digit = sum%10 + '0';
        carry = sum/10;
        ans.push_back(digit);
         add(num1,i-1,num2,j-1,carry,ans);
        
    }
public:
    string addStrings(string num1, string num2) {
        int i=num1.length()-1, j =num2.length()-1;
        int carry=0;
        string ans="";
        add(num1,i ,num2, j,carry,ans);
        rev(ans,0,ans.length()-1);
        return ans;

    }
};