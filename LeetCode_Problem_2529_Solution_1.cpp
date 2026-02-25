#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumCount(vector<int>& nums) {
        bool isPositive = false, isZero = false;
        int pos_num = 0, nev_num = 0;

        for (int i = 0; i < nums.size(); i++) {

            // first zero found
            if ((nums[i] == 0) && !isZero) {
                nev_num = i;          // negatives end here
                isZero = true;
            }

            // first positive found (no zero before)
            else if ((nums[i] > 0) && !isPositive && !isZero) {
                pos_num = i;
                nev_num = i;
                isZero = true;
                isPositive = true;
                break;
            }

            // first positive found (after zeros)
            else if ((nums[i] > 0) && !isPositive) {
                pos_num = i;
                isPositive = true;
                break;
            }
        }

        //  all numbers are negative
        if (!isZero && !isPositive) {
            nev_num = nums.size();
        }

        //  no positives
        if (!isPositive) {
            return nev_num;
        }

        pos_num = nums.size() - pos_num;
        return max(nev_num, pos_num);
    }
};