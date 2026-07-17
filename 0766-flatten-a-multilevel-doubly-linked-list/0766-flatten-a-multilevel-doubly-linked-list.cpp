/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node* trav = head;
        stack<Node*> s;
        while(!(trav == NULL && s.empty())){
            if(trav->child != NULL){
                if(trav->next != NULL) s.push(trav->next);
                trav->next = trav->child;
                trav->next->prev = trav;
                trav->child = NULL;
            }
            if(trav->next == NULL && !s.empty()){
                trav->next = s.top();
                s.pop();
                trav->next->prev = trav;
            }
            trav = trav->next;
        }
        return head;
    }
};