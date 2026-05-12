class Solution {
public:
    bool divideArray(vector<int>& nums) {

        unordered_map<int, int> freq;

        // đếm số lần xuất hiện
        for (int num : nums) {
            freq[num]++;
        }

        // kiểm tra chẵn/lẻ
        for (auto &p : freq) {

            if (p.second % 2 != 0) {
                return false;
            }
        }

        return true;
    }
};