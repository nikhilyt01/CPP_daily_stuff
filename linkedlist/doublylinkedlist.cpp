#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
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
void insertAtHead(Node*& head,Node* &tail,int data){
    if(head==NULL){ //yani 0 element hai 
        Node* node1=new Node(data);
        head=node1;
        tail=node1;
        return;
    }
    else{
        Node* temp=new Node(data);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
   

};
void insertAtTail(Node* &tail,Node* &head,int data){
    if(tail==NULL){
        Node* node1=new Node(data);
        tail=node1;
        head=node1;
        return;
    }else{
    //creating new node
    Node* temp=new Node(data);
    tail->next=temp;
    temp->prev=tail;
    tail=tail->next;
    }
};
void insertAtposition(Node* &tail,Node* &head,int pos,int data){
    //case 1
    if(pos==1){
        insertAtHead(head,tail,data);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<pos-1 && temp!=NULL){
        temp=temp->next;
        cnt++;
    }
    //edge case:agr position bahut badi dedi LL se badi
    if(temp==NULL){
        cout<<"position "<<pos<<" out of bounds"<<endl;
        return;
    }
    //case2:tail update if last pos input hai to
    if(temp->next==NULL){
        insertAtTail(tail,head,data);
        return;
    }
    Node* nodeToinsert=new Node(data);
    nodeToinsert->next=temp->next;
    temp->next->prev=nodeToinsert;
    nodeToinsert->prev=temp;
    temp->next=nodeToinsert;

};
void deleteNode(int pos,Node* &head,Node* &tail){
    //case 1:delete. first node
    if(pos==1){
        Node* temp=head;
        if(temp->next!=NULL){
            temp->next->prev=NULL;
            head=temp->next;
            temp->next=NULL;
        }
        else{
            head=NULL;
            tail=NULL;
        }
        //error as phele hi Null krdiya to next ko access nhi hai
        //temp->next=NULL;
        //temp->next->prev=NULL;
        delete temp;
        return;
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
    
    //tail updation
    if(curr->next==NULL){
        tail=prev;
    }
    prev->next=curr->next;
    if(curr->next!=NULL){
        curr->next->prev=prev;
    }
    curr->next=NULL;
    curr->prev=NULL;
    delete curr;
    
}
void print(Node* &head){
    Node* temp=head;
    cout<<"linkedlist is like: ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
};
int getlen(Node* &head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
};
int main(){
   
    Node* head=NULL;
    Node* tail=NULL;

    
    //cout<<getlen(head)<<endl;
    insertAtTail(tail,head,12);
    print(head);
    cout<<"head:"<<head->data<<" ";
    cout<<"tail:"<<tail->data<<endl<<endl;

    insertAtHead(head,tail,10);
    print(head);
    cout<<"head:"<<head->data<<" ";
    cout<<"tail:"<<tail->data<<endl<<endl;

    insertAtposition(tail,head,3,11);
    print(head);
    cout<<"head:"<<head->data<<" ";
    cout<<"tail:"<<tail->data<<endl<<endl;
    deleteNode(1,head,tail);
    print(head);
    cout<<"head:"<<head->data<<" ";
    cout<<"tail:"<<tail->data<<endl<<endl;
    insertAtposition(tail,head,3,15);
    print(head);
    cout<<"head:"<<head->data<<" ";
    cout<<"tail:"<<tail->data<<endl<<endl;
    
};