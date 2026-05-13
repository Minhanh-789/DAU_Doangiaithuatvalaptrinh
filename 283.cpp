class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int index = 0;

        // đưa số khác 0 lên trước
        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] != 0) {

                nums[index] = nums[i];
                index++;
            }
        }

        // phần còn lại gán 0
        while (index < nums.size()) {

            nums[index] = 0;
            index++;
        }
    }
};