class Solution {
public:
    string reversePrefix(string word, char ch) {

        int pos = word.find(ch);

        // không tìm thấy
        if (pos == string::npos) {
            return word;
        }

        // đảo prefix
        reverse(word.begin(), word.begin() + pos + 1);

        return word;
    }
};