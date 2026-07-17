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
    ListNode* swapPairs(ListNode* head) {
        ListNode dummy(0,head);
      ListNode *prev =&dummy  , *jaarohi=head;
      while(jaarohi && jaarohi->next){
        ListNode *satyam=jaarohi->next->next;
        ListNode *abhishek=jaarohi->next;
        abhishek->next=jaarohi;
        jaarohi->next=satyam;
        prev->next=abhishek;
        prev=jaarohi;
        jaarohi=satyam;
      } 
      return dummy.next;
      
      
    }
};