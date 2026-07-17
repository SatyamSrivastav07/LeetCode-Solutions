class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head)   return nullptr;
        ListNode* end=head;
        int p=k;
        while(p--){
            if(!end)    return head;
            end=end->next;
        }
        ListNode* newHead=reverse(head,end);
        head->next=reverseKGroup(end, k);
        return newHead;
    }

private:
    ListNode* reverse(ListNode* cur, ListNode* end) {
        ListNode* prev = nullptr;
        while (cur != end) {
            ListNode* next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
};