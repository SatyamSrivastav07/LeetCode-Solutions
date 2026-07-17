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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* prev=head;
        ListNode* curr=head->next;
        ListNode* nextnode=curr->next;

        vector<int>maximas;
        int i=1;
        while(nextnode!=NULL)
        {
            if((prev->val < curr->val && nextnode->val < curr->val) || (prev->val > curr->val && nextnode->val > curr->val))
            {
                maximas.push_back(i);
            }
            prev=curr;
            curr=nextnode;
            nextnode=curr->next;
            i++;
        }
        int n=maximas.size();

        if(n >= 2)
        {
            int maxdistance=maximas[n-1] - maximas[0];
            int mindistance=INT_MAX;
            for(int i=0;i<n-1;i++)
            {
                mindistance=min(mindistance,maximas[i+1] - maximas[i]);
            }
            return {mindistance,maxdistance};
        }
        else{
            return {-1,-1};
        }
    }
};