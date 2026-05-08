class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        
        for (char c : stones) {
            for (char j : jewels) {
                if (c == j) {
                    count++;
                }
            }
        }
        
        return count;
    }
};