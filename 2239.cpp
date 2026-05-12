class Solution {
public:
    int findClosestNumber(vector<int>& nums) {

        int ans = nums[0];

        for (int num : nums) {

            // gần 0 hơn
            if (abs(num) < abs(ans)) {
                ans = num;
            }

            // khoảng cách bằng nhau
            else if (abs(num) == abs(ans) &&
                     num > ans) {

                ans = num;
            }
        }

        return ans;
    }
};