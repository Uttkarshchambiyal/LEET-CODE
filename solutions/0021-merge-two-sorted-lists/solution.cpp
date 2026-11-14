class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* curr1 = list1;
        ListNode* curr2 = list2;
        ListNode newList(0);
        ListNode* tail = &newList;
        while(curr1 != nullptr && curr2 != nullptr){
            if(curr1->val < curr2->val){
                tail->next = curr1;
                curr1 = curr1->next;
            }
            else{
                tail->next = curr2;
                curr2 = curr2->next;
            }
            tail = tail->next;
        }
        tail->next = (curr1 != nullptr) ? curr1 : curr2;
        return newList.next;
    }
};
