class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {

        priority_queue<int> pq;

        // đưa vào max heap
        for (int x : gifts) {
            pq.push(x);
        }

        // thực hiện k lần
        while (k--) {

            int x = pq.top();
            pq.pop();

            x = sqrt(x);

            pq.push(x);
        }

        long long sum = 0;

        while (!pq.empty()) {

            sum += pq.top();
            pq.pop();
        }

        return sum;
    }
};