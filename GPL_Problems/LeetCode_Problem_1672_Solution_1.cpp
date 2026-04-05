class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum, rich;
        sum = rich = 0;
        for(int i = 0; i < accounts.size(); i++){
            sum = 0;
            for(int j = 0; j < accounts[0].size(); j++){
                sum += accounts[i][j];
                if (sum > rich){
                    rich = sum;
                }
            }
        }
        return rich;
    }
};
