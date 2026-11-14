class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* curr = head;
        int lenght = 0;
        while(curr!=nullptr){
            lenght++;
            curr = curr->next;
        }
        int middle = (lenght%2 == 0) ? lenght/2 : lenght/2+1;
        curr = head;
        int count = 0;
        while(count != middle){
            count++;
            curr = curr->next;
        }
        ListNode* prev = nullptr;
        while(curr != nullptr){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        curr = head;
        for(int i = 0; i<lenght/2; i++){
            if(prev->val != curr->val){
                return false;
            }
            prev = prev->next;
            curr = curr->next;
        }
        return true;
    }
};
