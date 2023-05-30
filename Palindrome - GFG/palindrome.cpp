//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
		  int num = n;
		  int rev = 0;
		  while(num){
		      int lastDigit = num%10;
		      if(rev<INT_MAX/10 || rev<INT_MIN/10){
		          rev=rev*10 + lastDigit;
		      }
		      num=num/10;
		      
		  }
		  if(rev==n){
		    return "Yes";
		  }
		  else{
		   return "No";
		  }
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends