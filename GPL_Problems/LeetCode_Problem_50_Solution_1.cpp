class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;   //to prevent overflow
        
        //considering negatives
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }
        
        return calc_solu(x, N);
    }
    
    double calc_solu(double x, long long n) {
        if (n == 0)
            return 1;

        //divide n by 2 to solve the runtime problem.
        double half = calc_solu(x, n / 2);
        
        if (n % 2 == 0)
            return half * half;
        else
            return half * half * x;
    }
};
