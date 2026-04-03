class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int count[26] = {0};

        // Đếm ký tự trong magazine
        for (char c : magazine) {
            count[c - 'a']++;
        }

        // Trừ ký tự theo ransomNote
        for (char c : ransomNote) {
            count[c - 'a']--;
            if (count[c - 'a'] < 0) {
                return false;
            }
        }

        return true;
    }
};