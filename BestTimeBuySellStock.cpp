int maximumProfit(vector<int> &prices){
    // Write your code here.
    if(prices.size()==1) return 0;
    int mini = prices[0];
    int maxi_profit = 0;
    
    for(int i = 1; i<prices.size(); i++){
        mini = min(mini,prices[i]);
        maxi_profit = max(maxi_profit, prices[i]-mini);
    }
    
    return maxi_profit;
    
}