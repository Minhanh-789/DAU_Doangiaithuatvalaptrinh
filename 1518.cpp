class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total = 0;
        int empty = 0;

        while (numBottles > 0) {
            // uống hết chai hiện có
            total += numBottles;

            // cộng vào chai rỗng
            empty += numBottles;

            // đổi chai mới
            numBottles = empty / numExchange;

            // số chai rỗng còn dư
            empty = empty % numExchange;
        }

        return total;
    }
};