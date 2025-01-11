//problem link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int s= prices.size();
        int l=0, r=1, max=0;

        while(r<s)
        {
            if (prices[r]<prices[l])
            {
                l=r;
                r++;
            }
            else if(prices[r]-prices[l]>max)
            {
                max=prices[r]-prices[l];
                r++;
            }
            else{
                r++;
            }
        }
        return max;
    }
};
