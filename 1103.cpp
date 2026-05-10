class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {

        vector<int> result(num_people, 0);

        int give = 1;
        int i = 0;

        while (candies > 0) {

            int person = i % num_people;

            // phát số nhỏ hơn giữa give và candies còn lại
            result[person] += min(give, candies);

            candies -= give;

            give++;
            i++;
        }

        return result;
    }
};