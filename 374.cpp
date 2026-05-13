/** 
 * Forward declaration of guess API.
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {

        int left = 1;
        int right = n;

        while (left <= right) {

            int mid = left + (right - left) / 2;

            int result = guess(mid);

            // tìm đúng
            if (result == 0) {
                return mid;
            }

            // số cần tìm lớn hơn
            else if (result == 1) {
                left = mid + 1;
            }

            // số cần tìm nhỏ hơn
            else {
                right = mid - 1;
            }
        }

        return -1;
    }
};