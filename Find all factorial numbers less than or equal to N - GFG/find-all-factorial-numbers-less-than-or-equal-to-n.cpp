//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
    private:
     long long factorial(long long n){
         //base case
         if(n==0||n==1){
             return 1;
         }
         
         return n*factorial(n-1);
     }
public:
    vector<long long> factorialNumbers(long long N)
    {
        vector<long long>vec;

       int i=1;
       while(factorial(i)<=N){
            vec.push_back(factorial(i));
            i++;
       }
         return vec;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for(auto num : ans){
            cout<<num<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
// } Driver Code Ends