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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int total = 0;
        ListNode *temp = head;

        while(temp){
            temp = temp->next;
            total += 1;
        }

        if(total == 1){
            if(n == 0){
                return head;
            }
            else{
                return nullptr;
            }
        }
        else if(total == n){
            head = head->next;
            return head;
        }
        total = total - n;
        temp = head;
        total -=1;

        cout<<total<<" ";
        while(total > 0){
            total -= 1;
            temp = temp->next;
        }

        // cout<<temp->val<<" ";
       
        ListNode *to_rem = temp->next;
        ListNode *rem_lst = to_rem->next;

        cout<<rem_lst<<" ";
        temp->next = NULL;
        to_rem->next = NULL;

        temp->next = rem_lst;

        return head;
    }
};
