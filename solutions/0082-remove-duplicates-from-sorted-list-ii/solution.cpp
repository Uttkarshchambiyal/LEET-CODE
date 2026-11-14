class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr = head;
        unordered_map<int,int> um;
        while(curr != nullptr){
            um[curr->val]++;
            curr = curr->next;
        }
        ListNode dummy(0);
        dummy.next = head;
        ListNode* prev = &dummy;
        while(prev->next != nullptr){
            if(um[prev->next->val] > 1){
                prev->next = prev->next->next;
            }
            else{
                prev = prev->next;
            }
        }
        return dummy.next;
    }
};
