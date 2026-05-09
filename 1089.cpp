class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> temp;

        for (int num : arr) {
            temp.push_back(num);

            if (num == 0) {
                temp.push_back(0);
            }
        }

        for (int i = 0; i < arr.size(); i++) {
            arr[i] = temp[i];
        }
    }
};