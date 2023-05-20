class Solution {
    private:
   
public:
    int maxProfit(vector<int>& prices) {
      int i=0;
        int minBuy = INT_MAX;
        int maxProfit =INT_MIN;
        while(i<prices.size()){
           if(prices[i]<minBuy){
               minBuy = prices[i];
           }
           if(maxProfit<(prices[i]-minBuy)){
               maxProfit = prices[i]-minBuy;
           }
            i++;
        }
        return maxProfit;
    }
};