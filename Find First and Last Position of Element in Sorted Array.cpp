class Solution {
public:
    int findFirst(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        int res = -1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                res = mid;
                right = mid - 1;  // tìm bên trái
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return res;
    }

    int findLast(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        int res = -1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                res = mid;
                left = mid + 1;   // tìm bên phải
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return res;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        return { findFirst(nums, target), findLast(nums, target) };
    }
};
