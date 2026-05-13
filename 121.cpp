class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;  // giá thấp nhất đã thấy
        int maxProfit = 0;       // lợi nhuận tối đa

        for (int price : prices) {
            if (price < minPrice) {
                minPrice = price;  // cập nhật giá mua tốt nhất
            } else {
                maxProfit = max(maxProfit, price - minPrice); // bán
            }
        }

        return maxProfit;
    }
};