class Solution {
public:
    string capitalizeTitle(string title) {

        stringstream ss(title);
        string word;
        string result = "";

        while (ss >> word) {

            // chuyển toàn bộ về lowercase
            for (char &c : word) {
                c = tolower(c);
            }

            // nếu độ dài > 2 thì viết hoa chữ đầu
            if (word.size() > 2) {
                word[0] = toupper(word[0]);
            }

            // nối vào kết quả
            if (!result.empty()) {
                result += " ";
            }

            result += word;
        }

        return result;
    }
};