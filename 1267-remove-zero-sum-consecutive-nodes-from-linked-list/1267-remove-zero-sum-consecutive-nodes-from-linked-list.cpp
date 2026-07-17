class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        map<int, ListNode*> mp;
        int prefixSum = 0;
        ListNode* temp = dummy;

        while (temp != NULL) {
            prefixSum += temp->val;
            mp[prefixSum] = temp;
            temp = temp->next;
        }
        prefixSum = 0;
        temp = dummy;
        while (temp != NULL) {
            prefixSum += temp->val;
            temp->next = mp[prefixSum]->next;
            temp = temp->next;
        }

        return dummy->next;
    }
};