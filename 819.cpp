class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {

        unordered_set<string> bannedSet(banned.begin(), banned.end());
        unordered_map<string, int> freq;

        // đổi dấu câu thành khoảng trắng
        for (char &c : paragraph) {
            if (!isalpha(c)) {
                c = ' ';
            } else {
                c = tolower(c);
            }
        }

        stringstream ss(paragraph);
        string word;

        // đếm tần suất
        while (ss >> word) {
            if (!bannedSet.count(word)) {
                freq[word]++;
            }
        }

        string answer = "";
        int maxCount = 0;

        // tìm từ xuất hiện nhiều nhất
        for (auto &p : freq) {
            if (p.second > maxCount) {
                maxCount = p.second;
                answer = p.first;
            }
        }

        return answer;
    }
};