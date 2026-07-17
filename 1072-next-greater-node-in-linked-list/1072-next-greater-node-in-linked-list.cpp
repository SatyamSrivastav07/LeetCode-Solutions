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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> question;
        while(head!=NULL)
        {
            question.push_back(head->val);
            head=head->next;
        }
        stack<int> st;
        st.push(0);
        vector<int> ans(question.size(),0);
        for(int i=question.size()-1;i>=0;i--)
        {
            int ch=question[i];
            while(ch>=st.top() && st.top()!=0)
            {
                st.pop();
            }
            ans[i]=st.top();
            st.push(ch);
        }
        return ans;
    }
};