class Solution {
public:
    int numTilings(int n) {
        int mod = 1e9 + 7;
        if (n == 0) return 1;
        if (n == 1) return 1;
        if (n == 2) return 2;
        long long a = 1, b = 1, c = 2, d;
        for (int i = 3; i <= n; ++i) {
            d = (2 * c + a) % mod;
            a = b;
            b = c;
            c = d;
        }
        return c;
    }
};