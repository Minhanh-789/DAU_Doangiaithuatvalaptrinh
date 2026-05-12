class Solution {
public:
    int minimumCost(vector<int>& cost) {

        sort(cost.rbegin(), cost.rend());

        int total = 0;

        for (int i = 0; i < cost.size(); i++) {

            // mỗi viên thứ 3 được miễn phí
            if ((i + 1) % 3 != 0) {
                total += cost[i];
            }
        }

        return total;
    }
};