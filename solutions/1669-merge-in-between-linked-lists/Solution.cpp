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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* curr1 = list1;
        ListNode* dummy = list1;
        ListNode* curr2 = list2;
        for (int i = 0; i < a - 1; i++) {
            curr1 = curr1->next;
        }
        for (int i = 0; i < b; i++) {
            dummy = dummy->next;
        }
        curr1->next = list2;
        while (curr2->next != nullptr) {
            curr2 = curr2->next;
        }
        curr2->next = dummy->next;
        return list1;
    }
};
