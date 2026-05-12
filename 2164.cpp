class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {

        vector<int> even;
        vector<int> odd;

        // tách phần tử
        for (int i = 0; i < nums.size(); i++) {

            if (i % 2 == 0)
                even.push_back(nums[i]);
            else
                odd.push_back(nums[i]);
        }

        // sort
        sort(even.begin(), even.end());

        sort(odd.begin(), odd.end(), greater<int>());

        int e = 0;
        int o = 0;

        // gắn lại
        for (int i = 0; i < nums.size(); i++) {

            if (i % 2 == 0)
                nums[i] = even[e++];
            else
                nums[i] = odd[o++];
        }

        return nums;
    }
};
