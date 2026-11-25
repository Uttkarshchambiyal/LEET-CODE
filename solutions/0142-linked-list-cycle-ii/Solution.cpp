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
    ListNode* detectCycle(ListNode* head) {
        ListNode* curr = head;
        if (head == nullptr) {
            return nullptr;
        }
        ListNode* slow = head;
        if (slow->next == nullptr) {
            return nullptr;
        }
        slow = head->next;
        ListNode* fast = head->next->next;
        while (fast && fast->next) {
            if (fast == slow) {
                slow = head;
                while (slow != fast) {
                    fast = fast->next;
                    slow = slow->next;
                }
                return slow;
            }
            fast = fast->next->next;
            slow = slow->next;
        }
        return nullptr;
    }
};
