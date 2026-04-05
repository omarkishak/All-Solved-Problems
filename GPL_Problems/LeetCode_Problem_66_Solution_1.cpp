class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {


        // this one isn't a correct solution since it's not going to cover all of the testcases, but it's just to show my logic I'm going to use.
        long long sum = 0;

        //turn the array into an int value + count them
        long long count = 0
        for(int digit : digits){
            count++;
            sum = sum * 10 + digit;
        }

        sum += 1;

        //now convert them into an array again.
        vector<int> outputArr(count);
        for(int i = count - 1; i >= 0; i--){
            outputArr[i] = sum % 10;
            sum /= 10;
        }

        return outputArr;
        
    }
};
