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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* current = head;
        ListNode* prev = nullptr;

        if (current == nullptr) return nullptr;

        while (current != nullptr) {
            if (current->val == val) {
                ListNode* temp = current;
                if (prev == nullptr) {
                    head = current->next;
                } else {
                    prev->next = current->next;
                }
                current = current->next;
                delete temp;
            } else {
                prev = current;
                current = current->next;
            }
        }
        return head;
    }
};
