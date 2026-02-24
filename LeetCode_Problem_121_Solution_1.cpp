class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowest_index = 0, max_value = 0;

        for(int i = 1; i < prices.size(); i++){
            //if we lose by selling, save it as our lowest point
            if(prices[lowest_index] > prices[i]){
                lowest_index = i;
            }

            //if we make profit by selling, calculate how much and compare it to the max profit we have.
            else{
                max_value = max(max_value, (prices[i] - prices[lowest_index]));
            }
        }
        return max_value;
        
    }
};