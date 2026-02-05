class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastPos(256, -1); 
        int left = 0, maxLen = 0;

        for (int right = 0; right < s.size(); right++) {
            char c = s[right];

            if (lastPos[c] >= left) {
                left = lastPos[c] + 1;
            }

            lastPos[c] = right;
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};