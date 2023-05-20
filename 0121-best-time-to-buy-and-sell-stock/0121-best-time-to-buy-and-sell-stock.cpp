class Solution {
    private:
    void  findMaxProfit(vector<int>& prices ,int i, int &minPrize ,int &maxProfit){
        //base case
        if(i==prices.size()) return;
        
        minPrize = min(minPrize , prices[i]);
        maxProfit = max(prices[i] - minPrize , maxProfit);
        
        findMaxProfit(prices,i+1,minPrize,maxProfit);
    }
public:
    int maxProfit(vector<int>& prices) {
       int minPrize = INT_MAX;
        int maxProfit =INT_MIN;
        findMaxProfit(prices,0,minPrize,maxProfit);
        return maxProfit;
    }
};