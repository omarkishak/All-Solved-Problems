class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> result(n, 0);  // preallocate result
        for (int i = 0; i < n; i++) {
            bool is_found = false;

            for (int j = i + 1; j < n; j++) {
                if (temperatures[j] > temperatures[i]) {
                    result[i] = j - i;  // assign instead of push_back
                    is_found = true;
                    break;
                }
            }

            // if not found, result[i] is already 0
        }

        return result;
    }
};