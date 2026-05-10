class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {

        vector<pair<int, string>> people;

        // ghép height với name
        for (int i = 0; i < names.size(); i++) {
            people.push_back({heights[i], names[i]});
        }

        // sort giảm dần theo chiều cao
        sort(people.rbegin(), people.rend());

        vector<string> result;

        // lấy tên sau khi sort
        for (auto &p : people) {
            result.push_back(p.second);
        }

        return result;
    }
};