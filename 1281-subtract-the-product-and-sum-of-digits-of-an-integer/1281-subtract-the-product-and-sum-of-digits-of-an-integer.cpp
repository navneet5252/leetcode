class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum =0;
        int mult = 1;
        while(n){
            int digit = n%10;
            sum+=digit;
            mult*=digit;
            n/=10;
        }
        return (mult-sum);
    }
};