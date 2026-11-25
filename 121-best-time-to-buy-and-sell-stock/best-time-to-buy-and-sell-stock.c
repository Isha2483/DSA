int maxProfit(int* prices, int pricesSize) {

    int buyPrice = INT_MAX;
    int maxProfit = 0;

    for(int i = 0; i < pricesSize; i++)
    {
        if(buyPrice < prices[i])
        {
            int profit = prices[i] - buyPrice;
            
            if(profit > maxProfit)
            {
                maxProfit = profit;
            }
        }
        else
        {
            buyPrice = prices[i];
        }
    }
    return maxProfit;

    
}