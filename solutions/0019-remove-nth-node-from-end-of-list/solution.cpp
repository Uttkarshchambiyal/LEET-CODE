class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head;
        int count = 0;
        while(curr != nullptr){
            count++;
            curr = curr->next;
        }
        int totaln = count - n;
        if(count == n){
            return head->next;
        }
        count = 0;
        curr = head;
        while(curr != nullptr && curr->next != nullptr){
            count++;
            if(count == totaln){
                curr->next = curr->next->next;
                break;
            }
            curr = curr->next;
        }
        return head;
    }
};
