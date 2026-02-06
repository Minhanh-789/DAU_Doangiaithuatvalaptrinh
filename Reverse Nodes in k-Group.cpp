/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* prev = &dummy;

        while (true) {
            // Kiểm tra đủ k node không
            ListNode* kth = prev;
            for (int i = 0; i < k && kth; i++) {
                kth = kth->next;
            }
            if (!kth) break;

            // Xác định biên
            ListNode* groupNext = kth->next;

            // Reverse nhóm k node
            ListNode* cur = prev->next;
            ListNode* next = nullptr;
            ListNode* prevNode = groupNext;

            while (cur != groupNext) {
                next = cur->next;
                cur->next = prevNode;
                prevNode = cur;
                cur = next;
            }

            // Nối lại
            ListNode* tmp = prev->next;
            prev->next = kth;
            prev = tmp;
        }

        return dummy.next;
    }
};
