class Solution {
public:

    int digitSum(int n) {
        int sum = 0;

        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }

        return sum;
    }

    int countBalls(int lowLimit, int highLimit) {

        unordered_map<int, int> box;
        int maxBalls = 0;

        for (int i = lowLimit; i <= highLimit; i++) {

            int sum = digitSum(i);

            box[sum]++;

            maxBalls = max(maxBalls, box[sum]);
        }

        return maxBalls;
    }
};