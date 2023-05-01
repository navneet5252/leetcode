//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
	public:
    int gcd(int A, int B) 
	{ 
	    int divisor = (A>B)?B:A;
	    int dividend = (A>B)?A:B;
	    int rem = -1;
	    while(rem!=0){
	        rem = dividend%divisor;
	        if(rem!=0){
	        dividend = divisor;
	        divisor = rem;
	        }
	        else{
	            break;
	        }
	    }
	    return divisor;
	} 
};

//{ Driver Code Starts.

int main() 
{
   	int t;
    cin >> t;
    while (t--)
    {
        int A, B;
        cin >> A >> B;
        Solution ob;
       	cout <<  ob.gcd(A, B) << "\n";
    }
    return 0;
}
// } Driver Code Ends