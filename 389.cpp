class Solution {
public:
    char findTheDifference(string s, string t) {
        int count[26] = {0};

        for (char c : s) count[c - 'a']++;
        for (char c : t) {
            count[c - 'a']--;
            if (count[c - 'a'] < 0) return c;
        }

        return ' ';
    }
};