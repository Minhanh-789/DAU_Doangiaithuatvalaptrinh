class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {

        unordered_map<int, int> freq;

        // đếm số đứng sau key
        for (int i = 0; i < nums.size() - 1; i++) {

            if (nums[i] == key) {
                freq[nums[i + 1]]++;
            }
        }

        int answer = -1;
        int maxCount = 0;

        // tìm frequency lớn nhất
        for (auto &p : freq) {

            if (p.second > maxCount) {

                maxCount = p.second;
                answer = p.first;
            }
        }

        return answer;
    }
};