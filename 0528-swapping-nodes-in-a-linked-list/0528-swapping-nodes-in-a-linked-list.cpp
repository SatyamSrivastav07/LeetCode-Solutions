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
             ListNode* swapNodes(ListNode* head, int k) {
                     int p=1,l=1;
                             ListNode* temp=head;
                                 /* counting total nodes from starting */
                                         while(temp->next!=NULL)
                                                 {
                                                             temp=temp->next;
                                                                         l++;
                                                                                 }
                                                                                         temp=head;
                                                                                                 ListNode* n1,*n2;
                                                                                                     /* storing the starting k'th node in n1 */
                                                                                                             while(p<k)
                                                                                                                     {
                                                                                                                                 temp=temp->next;
                                                                                                                                             p++;
                                                                                                                                                     }
                                                                                                                                                             n1=temp;
                                                                                                                                                                     temp=head;
                                                                                                                                                                             p=0;
                                                                                                                                                                                 /* storing the starting (l-k)'th node in n2 (i.e the ending k'th node) */
                                                                                                                                                                                         while(p<l-k)
                                                                                                                                                                                                 {
                                                                                                                                                                                                             temp=temp->next;
                                                                                                                                                                                                                         p++;
                                                                                                                                                                                                                                 }
                                                                                                                                                                                                                                         n2=temp;
                                                                                                                                                                                                                                             /* swapping the data values of nodes n1 and n2 */
                                                                                                                                                                                                                                                     int d=n1->val;
                                                                                                                                                                                                                                                             n1->val=n2->val;
                                                                                                                                                                                                                                                                     n2->val=d;
                                                                                                                                                                                                                                                                             return head;
                                                                                                                                                                                                                                                                                 }
                                                                                                                                                                                                                                                                                 };