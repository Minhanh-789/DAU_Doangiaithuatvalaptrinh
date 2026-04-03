#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        // Bước 1: Đếm tần suất
        for (int num : nums) {
            freq[num]++;
        }

        // Min heap: (tần suất, số)
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

        // Bước 2: Đưa vào heap
        for (auto& p : freq) {
            pq.push({p.second, p.first});
            if (pq.size() > k) {
                pq.pop();
            }
        }

        // Bước 3: Lấy kết quả
        vector<int> result;
        while (!pq.empty()) {
            result.push_back(pq.top().second);
            pq.pop();
        }

        return result;
    }
};