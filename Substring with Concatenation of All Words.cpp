class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> res;
        if (s.empty() || words.empty()) return res;

        int wordLen = words[0].size();
        int wordCount = words.size();
        int totalLen = wordLen * wordCount;

        unordered_map<string, int> wordMap;
        for (auto& w : words) wordMap[w]++;

        for (int i = 0; i < wordLen; i++) {
            unordered_map<string, int> windowMap;
            int left = i, count = 0;

            for (int right = i; right + wordLen <= s.size(); right += wordLen) {
                string word = s.substr(right, wordLen);

                if (wordMap.count(word)) {
                    windowMap[word]++;
                    count++;

                    while (windowMap[word] > wordMap[word]) {
                        string leftWord = s.substr(left, wordLen);
                        windowMap[leftWord]--;
                        left += wordLen;
                        count--;
                    }

                    if (count == wordCount) {
                        res.push_back(left);
                    }
                } else {
                    windowMap.clear();
                    count = 0;
                    left = right + wordLen;
                }
            }
        }
        return res;
    }
};
