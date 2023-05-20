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
public:
    string addStrings(string num1, string num2) {
         string ans="";
        int i = num1.length()-1;
        int j = num2.length()-1;
        int carry =0;
        while(i>=0 && j>=0){
            int val1 = num1[i] -'0';
            int val2 = num2[j] -'0';
            int sum = val1 + val2 + carry;
            if(sum<10){
                char ch = sum + '0';
                ans.push_back(ch);
                carry=0;
                
            }
            else{
                 char ch = sum%10 + '0';
                ans.push_back(ch);
                carry = sum/10;
            }
            i--,j--;
        }
        while(i>=0){
          
                 int sum =( num1[i--] - '0')+carry;
                   if(sum<10){
                   char ch = sum + '0';
                   ans.push_back(ch);
                   carry=0;
                  }
                
            
            else{
                 char ch = sum%10 + '0';
                ans.push_back(ch);
                carry = sum/10;
               }
            
        }
        while(j>=0){
            int sum =( num2[j--] - '0')+carry;
                   if(sum<10){
                   char ch = sum + '0';
                   ans.push_back(ch);
                   carry=0;
                  }
                
            
            else{
                 char ch = sum%10 + '0';
                ans.push_back(ch);
                carry = sum/10;
                 }
        }
        if(carry>0){
             int ch = carry+'0';
             ans.push_back(ch);
        }
        rev(ans,0,ans.length()-1);
        return ans;
    }
};