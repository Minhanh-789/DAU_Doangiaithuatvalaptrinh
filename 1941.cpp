class Solution {
public:
    bool areOccurrencesEqual(string s) {

        unordered_map<char, int> freq;

        // đếm số lần xuất hiện
        for (char c : s) {
            freq[c]++;
        }

        // lấy tần suất đầu tiên
        int count = freq.begin()->second;

        // kiểm tra các tần suất còn lại
        for (auto &p : freq) {
            if (p.second != count) {
                return false;
            }
        }

        return true;
    }
};