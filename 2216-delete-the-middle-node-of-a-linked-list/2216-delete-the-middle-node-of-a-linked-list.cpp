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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL) return NULL;
        ListNode* fast=head;
        ListNode* slow=head;
        int n=0,cnt=0;
        while(slow){
            n++;
            slow=slow->next;
        }
        n=n/2;
        while(fast){
            
            if(cnt==n-1){
                fast->next=fast->next->next;
            }
            cnt++;
            fast=fast->next;
        }
        return head;



    }
};