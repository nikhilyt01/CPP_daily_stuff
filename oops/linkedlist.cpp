#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    //using constructor to initialize data and next pointer
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    ~Node(){
        int val=this->data;
        if(this->next!=NULL){
            delete next;
            this ->next=NULL;
        }
        cout<<"memory is free for node with data "<<val<<endl;
    }
};
void insertAtHead(Node*& head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;

};
void insertAtTail(Node* &tail,int data){
    //creating new node
    Node* temp=new Node(data);
    tail->next=temp;
    tail=tail->next;

}
void insertAtposition(Node* &tail,Node* &head,int pos,int data){
    //case 1
    if(pos==1){
        insertAtHead(head,data);
        return;
    }
    Node*temp =head;
    int cnt=1;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    // edge case :Agar pos list ki length se bohot badi hai (e.g., pos = 15 for 5 nodes)
    if(temp == NULL) {
        cout << "Position out of bounds! Cannot insert." << endl;
        return;
    }
    //case2:tail update if last pos input hai to
    if(temp->next==NULL){
        insertAtHead(tail,data);
        return;
    }
    //main insert at middle
    Node* nodeToInsert=new Node(data);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;

}
void deleteNode(int pos,Node* &head,Node* &tail){
    //case 1:delete. first node
    if(pos==1){
        Node* temp=head;
        head=head->next;
        //m/m free
        temp->next=NULL;
        delete temp;
    }
    //case 2:delete middle or last node
    Node* prev=NULL;
    Node* curr=head;
    int cnt=1;
    while(cnt<pos && curr!=NULL ){
        prev=curr;
        curr=curr->next;
        cnt++;
    }
    if(curr==NULL){
        cout<<"position "<<pos<<"out of bounds"<<endl;
        return;
    }
    prev->next=curr->next;
    //tail updation
    if(curr->next==NULL){
        tail=prev;
    }
    curr->next=NULL;
    delete curr;
    
}
void printLL(Node* &head){
    Node* temp=head;
    cout<<"linkedlist is like: ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* node1=new Node(10);
    //cout<<"node:"<<node1->data<<endl;
   // cout<<"next:"<<node1->next<<endl;
    Node* head=node1;
    Node* tail=node1;
    printLL(head);
    insertAtHead(head,6);
    printLL(head);
    insertAtTail(tail,9);
    printLL(head);
    //insertAtHead(head,8);
    insertAtTail(tail,8);
    printLL(head);
    insertAtposition(tail,head,3,100);
    printLL(head);
    cout<<"head:"<<head->data<<endl;
    cout<<"tail:"<<tail->data<<endl;
    deleteNode(3,head,tail);
    printLL(head);
    cout<<"head:"<<head->data<<endl;
    cout<<"tail:"<<tail->data<<endl;
    deleteNode(4,head,tail);
    printLL(head);
    cout<<"head:"<<head->data<<endl;
    cout<<"tail:"<<tail->data<<endl;

}
