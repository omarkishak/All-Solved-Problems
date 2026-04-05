#include <cmath>
#include <cstdlib>
#include <vector>
using namespace std;

class Solution {
public:
    int calc(vector<int>& nums, vector<int>& result, int indc) {
        while (true) {
            if (indc < 0) {
                indc += nums.size();
                continue;
            }
            if (indc >= nums.size()) {
                indc -= nums.size();
                continue;
            }
            break;
        }
        return indc;
    }

    vector<int> constructTransformedArray(vector<int>& nums) {
        vector<int> result = nums;

        for (int i = 0; i < nums.size(); i++) {
            int inductor = 0;

            if (nums[i] > 0) {
                inductor = nums[i] + i;
                inductor = calc(nums, result, inductor);
                result[i] = nums[inductor];
            }
            else if (nums[i] < 0) {
                inductor = i + nums[i];
                inductor = calc(nums, result, inductor);
                result[i] = nums[inductor];
            }
            else {
                result[i] = nums[i];
            }
        }
        return result;
    }
};