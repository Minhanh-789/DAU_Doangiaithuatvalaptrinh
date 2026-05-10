class Solution {
public:
    int sumOfUnique(vector<int>& nums) {

        unordered_map<int, int> freq;

        // đếm số lần xuất hiện
        for (int num : nums) {
            freq[num]++;
        }

        int sum = 0;

        // cộng các phần tử xuất hiện đúng 1 lần
        for (int num : nums) {
            if (freq[num] == 1) {
                sum += num;
            }
        }

        return sum;
    }
};