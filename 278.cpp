/* The isBadVersion API is defined for you.
      bool isBadVersion(int version);
*/

class Solution {
public:
    int firstBadVersion(int n) {

        int left = 1;
        int right = n;

        while (left < right) {

            int mid = left + (right - left) / 2;

            // mid là bad
            if (isBadVersion(mid)) {

                right = mid;
            }

            // mid là good
            else {

                left = mid + 1;
            }
        }

        return left;
    }
};