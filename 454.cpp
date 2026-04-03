#include <unordered_map>
using namespace std;

class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2,
                     vector<int>& nums3, vector<int>& nums4) {

        unordered_map<int, int> mp;

        // Bước 1: nums1 + nums2
        for (int a : nums1) {
            for (int b : nums2) {
                mp[a + b]++;
            }
        }

        int count = 0;

        // Bước 2: nums3 + nums4
        for (int c : nums3) {
            for (int d : nums4) {
                int sum = c + d;
                if (mp.count(-sum)) {
                    count += mp[-sum];
                }
            }
        }

        return count;
    }
};