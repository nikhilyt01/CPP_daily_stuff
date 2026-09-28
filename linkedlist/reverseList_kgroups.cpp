#include<iostream>
using namespace std;

class Node {
  public:
     int data;
     Node *next;
     Node() : data(0), next(nullptr) {}
     Node(int x) : data(x), next(nullptr) {}
     Node(int x, Node *next) : data(x), next(next) {}
}
//code 360 and leetcode 25 hard
Node* kReverse(Node* head, int k) {
    if (head == NULL) {
        return NULL;
    }

    // 1. Check if there are at least k nodes remaining
    Node* cursor = head;
    int count = 0;
    while (cursor != NULL && count < k) {
        cursor = cursor->next;
        count++;
    }

    // If there are fewer than k nodes left, leave them as they are!
    if (count < k) { // base case
        return head;
    }

    // 2. Reverse the first k nodes
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
    count = 0;

    while (curr != NULL && count < k) {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    // 3. Recursively call for the rest of the list and link it
    if(forward!=NULL){
head->next = kReverse(forward, k);
    }
    

    // 4. Return the new head of this reversed group
    return prev;
}