//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    Node* reverse(Node* heading){
        Node* prevNode = NULL;
        Node* currNode = heading;
        Node* nextNode = NULL;
        while(currNode!=NULL){
            nextNode = currNode->next;
            currNode->next = prevNode;
            prevNode=currNode;
            currNode = nextNode;
            
        }
        return prevNode;
    }
    
    bool isPalindrome(Node *head)
    {
       //FINDING THE MID NODE->BY TURTLE -HARE ALGO
       Node* fast = head;
       Node* slow = head;
       while(fast->next!=NULL  && fast->next->next!=NULL){
           fast = fast->next->next;
           slow = slow->next;
       }
       
       slow->next = reverse(slow->next);
       slow = slow->next;
       Node* dummy = head;
       while(slow!=NULL){
           if(slow->data!=dummy->data){
               return false;
           }
           slow=slow->next;
           dummy=dummy->next;
       }
       return true;
      
       
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends