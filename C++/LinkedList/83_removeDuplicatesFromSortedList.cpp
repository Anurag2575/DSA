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

ListNode* deleteDuplicates(ListNode* head){
  if(!head ||| !head->next) return head;
  ListNode* temp = head;
  ListNode* mover = head->next;

  while(mover){
    if(temp->val == mover->val){
      temp->next = mover->next;
      mover = temp->next;
    }else{
      temp = temp->next;
      mover = mover->next;
    }
  }
  return head;
}
