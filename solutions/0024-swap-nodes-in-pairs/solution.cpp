class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* prev = &dummy;
        while(prev->next != nullptr && prev->next->next != nullptr){
            ListNode* first = prev->next;
            ListNode* second = first->next;
            ListNode* last = second->next;
            prev->next = second;
            second->next = first;
            first->next = last;
            prev = first;
        }
        return dummy.next;
    }
};
