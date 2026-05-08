class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> unique(candyType.begin(), candyType.end());
        return min((int)unique.size(), (int)candyType.size() / 2);
    }
};