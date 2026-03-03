class Solution {
public:
    bool reorderedPowerOf2(int n) {
        int cnt = digitCount(n);
        for (int i = 0; i < 30; ++i) {
            if (digitCount(1 << i) == cnt)
                return true;
        }
        return false;
    }

private:
    int digitCount(int x) {
        int count = 0;
        while (x > 0) {
            count += pow(10, x % 10);
            x /= 10;
        }
        return count;
    }
};
