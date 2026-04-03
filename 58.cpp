class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int i = s.length() - 1;
        int length = 0;
        
        // bỏ space cuối
        while (i >= 0 && s[i] == ' ')
            i--;
        
        // đếm ký tự của từ cuối
        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }
        
        return length;
    }
};