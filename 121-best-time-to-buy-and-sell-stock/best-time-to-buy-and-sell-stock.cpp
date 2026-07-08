class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int curbuy=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i] > curbuy)
            {
                maxProfit=max(maxProfit,prices[i]-curbuy);
            }
            curbuy=min(curbuy,prices[i]);
        }
        return maxProfit;
    }
};