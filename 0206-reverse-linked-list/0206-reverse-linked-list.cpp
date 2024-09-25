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
    ListNode* reverseList(ListNode* head) {
      //1->2->3->4->5
      //5->4->3->2->1
      //head->null
      //2->1
      //3->2
      //4->3
      //5->4
      //pseudocode
     if(head==NULL || head->next==NULL){
             return head;
     }
      ListNode* cur=head;
      ListNode* front;
      ListNode* newHead=reverseList(head->next);
      front=head->next;
      front->next=head;
      head->next=NULL;
       return newHead;     
            
      
            
      

    }
};