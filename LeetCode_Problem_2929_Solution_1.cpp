class Solution {
public:
    long long choose2(long long a) {
        if (a < 2) return 0;
        return (a * (a - 1)) / 2;
    }

    long long distributeCandies(int n, int limit) {
        long long ans = 0;
        long long C3[4] = {1, 3, 3, 1};

        for (int j = 0; j <= 3; ++j) {
            long long t = (long long)n - (long long)j * ((long long)limit + 1) + 2;
            long long ways = C3[j] * choose2(t);
            if (j % 2 == 1) {
                ans -= ways;
            } else {
                ans += ways;
            }
        }

        return ans;
    }
};
