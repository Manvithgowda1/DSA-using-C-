class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=0;
        int min_price=INT_MAX;
        for(int i=0;i<prices.size();i++){
            min_price=min(min_price,prices[i]);
            max_profit=max(max_profit,prices[i]-min_price);

        }
       return max_profit ;
    }
};

prices =[7,1,5,3,6,4]
Output: 5
//time complexity o(n)
//space complexity o(1)
