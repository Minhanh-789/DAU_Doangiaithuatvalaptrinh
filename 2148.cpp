class Solution {
public:
    int countElements(vector<int>& nums) {

        int minValue = *min_element(nums.begin(), nums.end());
        int maxValue = *max_element(nums.begin(), nums.end());

        int count = 0;

        for (int num : nums) {

            if (num > minValue && num < maxValue) {
                count++;
            }
        }

        return count;
    }
};