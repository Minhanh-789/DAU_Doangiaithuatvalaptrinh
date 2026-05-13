class Solution {
public:
    string removeDuplicates(string s) {

        string st = "";

        for (char c : s) {

            // nếu trùng ký tự gần nhất
            if (!st.empty() && st.back() == c) {

                st.pop_back();
            }

            else {

                st.push_back(c);
            }
        }

        return st;
    }
};