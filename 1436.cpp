class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> startCities;

        // lưu các thành phố xuất phát
        for (auto& path : paths) {
            startCities.insert(path[0]);
        }

        // tìm thành phố không có đường đi ra
        for (auto& path : paths) {
            if (startCities.count(path[1]) == 0) {
                return path[1];
            }
        }

        return "";
    }
};