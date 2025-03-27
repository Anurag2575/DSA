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

Node* reverseLLIteration(Node* head){
    if(!head || !head->next) return head;
    Node* temp = head;
    Node* prev = nullptr;
    Node* next = temp->next;
    while(temp){
        temp->next = prev;
        prev = temp;
        temp = next;
        if(next) next = next->next;
    }
    return prev;
}

Node* reverseLLRecursion(Node* head){
    if(!head || !head->next) return head;
    Node* newHead = reverseLLRecursion(head->next);
    Node* front = head->next;
    front->next = head;
    head->next = nullptr;
    return newHead;
}