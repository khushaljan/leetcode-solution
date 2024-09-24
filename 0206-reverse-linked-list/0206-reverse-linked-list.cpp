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
      ListNode* prev=NULL;
      ListNode* cur=head;
      
      while(cur!=NULL){
      
      ListNode* front=cur->next;
      cur->next=prev;
      prev=cur;
      cur=front;
      
      
    }
        return prev;
    }
};