class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int length = 0;
        ListNode* curr = head;

        while (curr->next != nullptr) {
            length++;
            curr = curr->next;
        }

        int newLength = (length / 2) + 1;

        curr = head;
        int count = 0;

        if (length % 2 == 0) {
            count = 1;
        }

        while (curr->next != nullptr) {
            if (count >= newLength) {
                return curr;
            }
            count++;
            curr = curr->next;
        }

        return curr;
    }
};
