//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    private:
       long long findgcd(long long a,long long b){
           //base case
           if(a==0){
               return b;
           }
           return findgcd(b%a,a);
       }
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        vector<long long>ans;
        long long gcd = findgcd(A,B);
        long long lcm = (A*B)/gcd;
        ans.push_back(lcm);
        ans.push_back(gcd);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends