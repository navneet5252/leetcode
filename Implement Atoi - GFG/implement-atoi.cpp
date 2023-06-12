//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
       int i = 0;
       
       //if space then ignore space
       while(i<s.length() && s[i] ==' '){
           i++;
       }
       //sign
       bool sign = true; //true for +
       if(s[i]=='-'){
           sign = false;
           i++;
       }
       else{
           if(s[i]=='+'){
               i++;
           }
       }
       //ignoring zeros
       while(i<s.length() && s[i]=='0'){
           i++;
       }
       long long ans = 0;
       while(i<s.length() && (s[i]>='0' && s[i]<='9')){
            if(sign==false  &&  -(ans*10+(s[i]-'0'))<=INT_MIN){
                   return INT_MIN;
               }
           else if(sign==true &&  (ans*10+(s[i]-'0'))>=INT_MAX){
                   return INT_MAX;
               }
                ans = ans*10+(s[i]-'0');
           i++;
       }
       if(i<s.length() && (s[i]<'0' || s[i]>'9')){
           return -1;
       }
       if(sign == false){
           ans*=-1;
       }
       
       return (int)ans;
       
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends