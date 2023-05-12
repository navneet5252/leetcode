class Solution {
public:
    // int _gcd(int divisor ,int divident){
    //     while(divident%divisor !=0){
    //         int rem = divident%divisor;
    //         divident = divisor;
    //         divisor = rem;
    //     }
    //     return divisor;
    // }
    int smallestEvenMultiple(int n) {
        // if(n==1){
        //   return 2;
        // }
        // int gcd = _gcd(2,n);
        // int lcm = (n*2)/gcd;
        // return lcm;
        if(n%2==0){
          //allready even number
            return n;
        }
        return (2*n);
    }
    
};