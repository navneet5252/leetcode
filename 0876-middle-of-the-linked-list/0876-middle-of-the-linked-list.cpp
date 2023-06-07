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
    ListNode* middleNode(ListNode* head) {
        int len =0;
        ListNode* temp = head;
        while(temp!=NULL){
            len++;
            temp=temp->next;
            
        }
        int middle=0;
        //odd
        if(len%2!=0){
             middle = (len+1)/2;
            
        }
        else{
            middle = (len+2)/2;
        }
        ListNode* move = head;
        while(--middle){
            // if(middle==1){
            //     break;
            // }
            move=move->next;
        }
         return move;        
    }
};