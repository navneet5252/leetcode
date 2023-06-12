//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    private:
    void func(string s,int i,int &ans){
        //base case
        if(i==s.length()){
            return;
        }
        
        
        if(s[i]<'0' || s[i] >'9'){
            ans=-1;
            return;
        }
       ans = ans*10 + (s[i]-'0');
       func(s,i+1,ans);
    }
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        int i=0;
        int ans = 0;
        if(s[i]=='-' || s[i]=='+'){
            i++;
        }
         if(s[i]<'0' || s[i] >'9'){
            ans=-1;
            return ans;
        }
      func(s,i,ans);
       if(s[0] =='-'){
            ans*= -1;
            
       } 
       return ans;
     
       
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