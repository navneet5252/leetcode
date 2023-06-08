/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    private:
     bool hasCycle(ListNode *head) {
      if(head==NULL  || head->next==NULL){
          return false;
      }
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next && fast->next->next!=NULL){
            slow=slow->next;
           fast =  fast->next->next;
                if(slow==fast){
                    return true;
                }
        }
        return false;
    }
public:
    ListNode *detectCycle(ListNode *head) {
       if(head==nullptr || head->next==nullptr){
           return NULL;
       }
        ListNode* slowPtr = head;
        ListNode* fastPtr = head;
        ListNode* entry = head;
        while(fastPtr->next!=nullptr && fastPtr->next->next!=nullptr){
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
            if(slowPtr==fastPtr){
                while(entry!=slowPtr){
                    entry = entry->next;
                    slowPtr = slowPtr->next;
                }
                return slowPtr;
            }
        }
        return NULL;
    }
};