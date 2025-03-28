#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* linkedListCycleII(Node* head){
    Node* slow = head;
    Node* fast = head;

    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        
        if(slow == fast){
            slow = head;
            while(slow != fast){
            slow = slow->next;
            fast = fast->next;
            }
            return slow;
        }
    }
    return NULL;
}