#include <sstream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> mp1;
        unordered_map<string, char> mp2;

        vector<string> words;
        string word;
        stringstream ss(s);

        // Tách từ
        while (ss >> word) {
            words.push_back(word);
        }

        if (words.size() != pattern.size()) return false;

        for (int i = 0; i < pattern.size(); i++) {
            char c = pattern[i];
            string w = words[i];

            // check char -> word
            if (mp1.count(c)) {
                if (mp1[c] != w) return false;
            } else {
                mp1[c] = w;
            }

            // check word -> char
            if (mp2.count(w)) {
                if (mp2[w] != c) return false;
            } else {
                mp2[w] = c;
            }
        }

        return true;
    }
};