/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (!head) return false;

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) {
            slow = slow->next;          // 1 bước
            fast = fast->next->next;    // 2 bước

            if (slow == fast) {
                return true; // gặp nhau → có cycle
            }
        }

        return false;
    }
};