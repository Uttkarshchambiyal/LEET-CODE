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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> arr;
        int n = lists.size();
        for (int i = 0; i < n; i++) {
            ListNode* curr = lists[i];
            while (curr != nullptr) {
                arr.push_back(curr->val);
                curr = curr->next;
            }
        }
        n = arr.size();
        sort(arr.begin(), arr.end());
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        for (int i = 0; i < n; i++) {
            curr->next = new ListNode(arr[i]);
            curr = curr->next;
        }
        return dummy->next;
    }
};
