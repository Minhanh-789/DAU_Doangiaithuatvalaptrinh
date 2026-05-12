class Solution {
public:
    int countHillValley(vector<int>& nums) {

        vector<int> arr;

        // bỏ phần tử trùng liên tiếp
        arr.push_back(nums[0]);

        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] != nums[i - 1]) {
                arr.push_back(nums[i]);
            }
        }

        int count = 0;

        // kiểm tra hill / valley
        for (int i = 1; i < arr.size() - 1; i++) {

            // hill
            if (arr[i] > arr[i - 1] &&
                arr[i] > arr[i + 1]) {

                count++;
            }

            // valley
            else if (arr[i] < arr[i - 1] &&
                     arr[i] < arr[i + 1]) {

                count++;
            }
        }

        return count;
    }
};