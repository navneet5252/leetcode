class Solution {
public:
    int countPrimes(int num) {
            if(num==0) return 0;
        vector<bool>vec(num,true);
        vec[0]=vec[1]=false;
        for(int i=2;i<num;i++){
          if(vec[i]!=false){
             int j=i*2;
             while(j<num){
               vec[j]=false;
                j+=i;
             }
          }
        }
        int cnt=0;
        for(int i=2;i<num;i++){
          if(vec[i]!=false){
            cnt++;
          }
        }
        return cnt;
    }
};