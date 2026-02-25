#include <bits/stdc++.h>

class Solution {
public:
    int maximumCount(vector<int>& nums) {
       int positive_count = 0, negative_count = 0;

       for(int i : nums){
        if(i > 0)
        positive_count++;

        else if(i < 0)
        negative_count++;
       }

       return max(positive_count, negative_count);
    }
};
