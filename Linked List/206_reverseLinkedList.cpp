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

Node* arr2LL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void print(Node* head){
    while(head){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

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