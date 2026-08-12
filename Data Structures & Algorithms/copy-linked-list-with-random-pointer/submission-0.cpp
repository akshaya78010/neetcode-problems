/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL){
            return head;
        }
        unordered_map<Node *,Node *>mpp;
        // unordered_map<Node *,Node *>orig_rand;

        Node *temp = head;
        Node *cHead = new Node(0);
        Node *ctemp = cHead;

        //create straignht copy and map the orig random pointers to copy random pointrs
        while(temp){
         ctemp->next = new Node(temp->val);
         mpp[temp] = ctemp->next;
        // orig_rand[temp] = temp->rand
         temp = temp->next;
         ctemp = ctemp->next;
        }

        //get the actual head
        cHead = cHead->next;


        temp = head;
        ctemp = cHead;

        while(ctemp){
            ctemp->random = mpp[temp->random];
            temp = temp->next;
            ctemp = ctemp->next;
        }

        return cHead;
    }
};