#include<iostream>
using namespace std;
class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };
        
void reverse(Node* &head, Node* curr, Node* prev) {
    // Base case
    if (curr == NULL) {
        head = prev;
        return;
    }
    
    Node* forward = curr->next;
    reverse(head, forward, curr); // Recursive call
    curr->next = prev;            // Wapas aate waqt link reverse karna
}

Node* reverseLinkedList(Node *head) {
    Node* curr = head;
    Node* prev = NULL;
    reverse(head, curr, prev);
    return head;
}
/*
Node* reverseLinkedList(Node *head) {
    Node* curr = head;
    Node* prev = NULL;
    Node* forward=NULL;
    while(curr!=NULL){
    forward=curr->next;
    curr->next=prev;
    prev=curr;
    curr=forward;
    }
}
*/