class Solution {
public:
    int divide(int dividend, int divisor) {
        // Edge case overflow
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        // Xác định dấu
        bool negative = (dividend < 0) ^ (divisor < 0);

        long long a = llabs((long long)dividend);
        long long b = llabs((long long)divisor);

        long long result = 0;

        while (a >= b) {
            long long temp = b;
            long long multiple = 1;

            while ((temp << 1) <= a) {
                temp <<= 1;
                multiple <<= 1;
            }

            a -= temp;
            result += multiple;
        }

        if (negative) result = -result;

        return result;
    }
};
