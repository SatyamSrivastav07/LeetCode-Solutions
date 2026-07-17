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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode();
        ListNode* ptr=dummy;
        ListNode* list1ptr = list1;
        ListNode* list2ptr =list2;

        while(list1ptr!=NULL && list2ptr!=NULL){
            if(list1ptr->val<=list2ptr->val){
                ptr->next=list1ptr;
                ptr=ptr->next;
                list1ptr=list1ptr->next;
            }
            else{
                ptr->next=list2ptr;
                ptr=ptr->next;
                list2ptr=list2ptr->next;
            }
        }
        while(list1ptr!=NULL){
                ptr->next=list1ptr;
                ptr=ptr->next;
                list1ptr=list1ptr->next;
            }
        while(list2ptr!=NULL){                
            ptr->next=list2ptr;
            ptr=ptr->next;
            list2ptr=list2ptr->next;
        }
        ptr->next = NULL;
        return dummy->next;
    }
};