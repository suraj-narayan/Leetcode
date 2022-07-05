class Solution {
public:
   
    int maxProfit(vector<int>& prices) {
         int MaxProfit = 0;
        int buyingPrice = prices[0];
        for(int i=1;i<prices.size();i++)
        {
                int currPrice = prices[i];
                if(currPrice<buyingPrice)
                        buyingPrice = currPrice;
                else
                {
                     MaxProfit +=   currPrice- buyingPrice;
                     buyingPrice = currPrice; 
                }
        }
            return  MaxProfit;
    }
};