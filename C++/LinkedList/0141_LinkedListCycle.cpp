/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

bool hasCycle(ListNode* head){
  ListNode* slow = head;
  ListNode* fast = head;//tortoise and hare algo.

  while(fast && fast->next){
    slow = slow->next;
    fast = fast->next->next;

    if(slow == fast) return true;//cycle detected
  }

  return false;
}
