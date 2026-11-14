class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* curr1 = headA;
        ListNode* curr2 = headB;
        int length1 = 0;
        int length2 = 0;
        while(curr1 != nullptr){
            length1++;
            curr1 = curr1->next;
        }
        while(curr2 != nullptr){
            length2++;
            curr2 = curr2->next;
        }
        curr1 = headA;
        curr2 = headB;
        int mainLength = length1 > length2 ? length1-length2 : length2-length1;
        if(length1>length2){
            for(int i = 0; i<mainLength; i++){
                curr1 = curr1->next;
            }
        }
        else{
            for(int i = 0; i<mainLength; i++){
                curr2 = curr2->next;
            }
        }
        while(curr1 != nullptr && curr2 != nullptr){
            if(curr1 == curr2){
                return curr1;
            }
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
        return nullptr;
    }
};
