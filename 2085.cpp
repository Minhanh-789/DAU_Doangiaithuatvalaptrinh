class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {

        unordered_map<string, int> freq1;
        unordered_map<string, int> freq2;

        // đếm words1
        for (string word : words1) {
            freq1[word]++;
        }

        // đếm words2
        for (string word : words2) {
            freq2[word]++;
        }

        int count = 0;

        // kiểm tra xuất hiện đúng 1 lần ở cả 2 mảng
        for (auto &p : freq1) {

            string word = p.first;

            if (freq1[word] == 1 && freq2[word] == 1) {
                count++;
            }
        }

        return count;
    }
};