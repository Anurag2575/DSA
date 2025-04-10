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

 ListNode* middleNode(ListNode* head){
    ListNode* slow = head;
    ListNode* fast = head;//tortoise and hare algorithm

    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
 }