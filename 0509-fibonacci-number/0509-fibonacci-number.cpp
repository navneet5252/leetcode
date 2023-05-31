class Solution {
    private:
    
    int calcfabbo(int n){
        if(n<=1){
           return n;
        }
        
        int firstTerm = calcfabbo(n-1);
        int nextTerm = calcfabbo(n-2);
        return firstTerm+nextTerm;
    }
public:
    int fib(int n) {
        return calcfabbo(n);
    }
};