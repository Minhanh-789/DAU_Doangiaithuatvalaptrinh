class Solution {
public:
    string toGoatLatin(string sentence) {
        stringstream ss(sentence);
        string word, result = "";
        int index = 1;

        while (ss >> word) {
            // kiểm tra nguyên âm
            char c = tolower(word[0]);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                word = word + "ma";
            } else {
                word = word.substr(1) + word[0] + "ma";
            }

            // thêm a
            word += string(index, 'a');

            // nối vào kết quả
            if (!result.empty()) result += " ";
            result += word;

            index++;
        }

        return result;
    }
};