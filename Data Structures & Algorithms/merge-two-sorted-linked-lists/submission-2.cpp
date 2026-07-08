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
    ListNode* merge(ListNode *list1,ListNode* list2){
      ListNode *newnode = new ListNode(0);
      ListNode *head = newnode;
      ListNode *prev = list1;
      ListNode *prev2 = list2;
      ListNode *next = prev->next;
      ListNode *next2 = prev2->next;

      while(next && next2){
        if(prev->val < prev2->val){
          prev->next = NULL;
          newnode->next = prev;
          prev = next;
          next = prev->next;
          newnode = newnode->next;
        }
        else if(prev->val > prev2->val){
          prev2->next = NULL;
          newnode->next = prev2;
          prev2 = next2;
          next2 = prev2->next;
          newnode = newnode->next;
        }
        else if(prev->val == prev2->val){
          prev->next = NULL;
          prev2->next = NULL;

          newnode->next = prev;
          newnode = newnode->next;
          newnode->next = prev2;
          newnode = newnode->next;

          prev = next;
          prev2 = next2;

          next = prev->next;
          next2 = prev2->next;
        }
      }

      while(prev){
        if(prev2){
          if(prev2->val < prev->val){
            newnode->next = prev2;
            newnode = newnode->next;
            prev2 = prev2->next;
            continue;
          }
        }

          newnode->next = prev;
          prev = prev->next;
          newnode = newnode->next;
      }

      while(prev2){
        if(prev){
        if(prev->val < prev2->val){
            newnode->next = prev;
            newnode = newnode->next;
            prev = prev->next;
            continue;
          }
        }

          newnode->next = prev2;
          prev2 = prev2->next;
          newnode = newnode->next;
      }

      // if(prev->val <= prev2->val){
      //   newnode->next = prev;
      //   newnode = newnode->next;
      //   newnode->next = prev2;
      // }
      // else if(prev->val >  prev2->val){
      //   newnode->next = prev2;
      //   newnode = newnode->next;
      //   newnode->next = prev;
      // }

      return head->next;
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode *res = NULL;
        if(list1 != NULL && list2 != NULL){
         res =  merge(list1,list2);
        }
        else if(list1 == NULL && list2 != NULL){
          return list2;
        }
        else if(list1 != NULL && list2 == NULL){
          return list1;
        }

        return res;
    }
};
