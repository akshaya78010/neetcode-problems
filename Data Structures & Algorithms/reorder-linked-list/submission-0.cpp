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
    ListNode *find_mid(ListNode *head){
        ListNode *slow_prev = NULL;
        ListNode *slow = head;
        ListNode *fast = head;

        while(fast && fast->next){
            slow_prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow_prev;
    }

    ListNode *reverse(ListNode *head){
        ListNode *prev= NULL;
        ListNode *curr = head;
        ListNode *temp;

        while(curr != NULL){
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }

    void reorderList(ListNode* head) {
        if(!head || ! head->next){
            return;
        }

        ListNode *mid = find_mid(head);
        ListNode *left = head;
        ListNode *right = mid->next;
        mid->next = NULL;
        right = reverse(right);
        // cout<<left->val<<'\n';
        // cout<<right->val<<'\n';

        // cout<<'\n';

        ListNode *temp = new ListNode(0);
        ListNode *res = temp;

        while(left && right){
            temp->next = left;
            left = left->next;
            temp = temp->next;
            temp->next = right;
            right = right->next;
            temp = temp->next;
            // cout<<"1"<<'\n';
        }

        while(left){
            temp->next = left;
            left = left->next;
            temp = temp->next;
            // cout<<"2"<<'\n';
        }

        while(right){
            temp->next = right;
            right = right->next;
            temp = temp->next;
            // cout<<"3"<<'\n';
        }
        head = res->next;
    }
};