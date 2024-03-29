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
    private:
     ListNode* reverse(ListNode* heading){
         ListNode* prevNode = NULL;
         ListNode* currNode = heading;
         ListNode* nextNode = NULL;
         while(currNode!=NULL){
             nextNode =currNode->next;
             currNode->next = prevNode;
             prevNode= currNode;
             currNode = nextNode;
         }
         return prevNode;
     }
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL){
          return true;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow= slow->next;
            fast =fast->next->next;
        }
        slow->next= reverse(slow->next);
        slow = slow->next;
        ListNode* dummy = head;
        while(slow!=NULL){
            if(slow->val != dummy->val){
              return false;
             }
            slow=slow->next;
            dummy = dummy->next;
        }
        return true;
    }
};