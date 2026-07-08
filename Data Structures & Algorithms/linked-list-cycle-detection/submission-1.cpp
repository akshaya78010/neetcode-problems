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
    bool hasCycle(ListNode* head) {
        ListNode *i = head;
        ListNode *j = head;
        bool flag = false;
        int county = 0;

        while(i && j){
            if(county > 0 && i == j){
                flag = true;
                break;
            }
            i = i->next;
            j = j->next;
            if(j){
            j = j->next;
            }
            county += 1;
        }

        return flag;
    }
};
