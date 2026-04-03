class Solution {
public:
    int firstUniqChar(string s) {
        int count[26] = {0};

        // Bước 1: Đếm
        for (char c : s) {
            count[c - 'a']++;
        }

        // Bước 2: Tìm ký tự xuất hiện 1 lần đầu tiên
        for (int i = 0; i < s.length(); i++) {
            if (count[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
};