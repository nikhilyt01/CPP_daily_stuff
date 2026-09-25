#include<iostream>
using namespace std;

//problem no:876 leetcode
//random copied struct from leetcode
// approch: first count the number of nodes in the linked list and then find the middle node by traversing again
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
}
ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        int mid=(cnt/2 )+1;
        int i=1;
        temp=head;
        while(i<mid){
          temp=temp->next;
          i++;
        }
        return temp;
};
