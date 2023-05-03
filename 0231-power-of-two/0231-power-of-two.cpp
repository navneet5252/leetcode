class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0){
            return false;
        }
      bool ans =((ceil(log2(n)))==(floor(log2(n))))?true:false;
       return ans;
    }
};