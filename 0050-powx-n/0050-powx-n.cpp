class Solution {
public:
  
    double calPow(double x,int n){
        //base case
        if(n==0){
            return 1;
        }
      double ans =calPow(x,n/2);
       if(n%2==0){
        //even power
           return (ans*ans);
       }
        else{
            return ( x*ans*ans);
        }
    }
    double myPow(double x, int n) {

        
        if(n<0){
            return 1/calPow(x,abs(n));
        }
        return calPow(x,abs(n));
    }
};