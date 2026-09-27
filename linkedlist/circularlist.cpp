#include<iostream> 
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
      this->data=data;
      this->next=NULL;
    }
    ~Node(){
        int val=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data "<<val<<endl;
    }
};
void insertNode(Node* &tail,int element,int data){
    if(tail==NULL){ //empty list
        Node* newNode=new Node(data);
        tail=newNode;
        newNode->next=newNode;
    }
    else{
        Node* curr=tail;
       do{
        if(curr->data==element){
            break;  // mtlb element found
        }
        curr=curr->next;
       }while(curr!=tail);  //false hogya yani element nhi hai

       if(curr->data !=element){// curr tail hogya yani 1 cycle complete hogya and element not found
            cout<<"element "<<element<<" not found in the list"<<endl;
            return;
       }
       Node* temp=new Node(data);
       temp->next=curr->next;
       curr->next=temp;

    }
};
void deleteNode(Node* &tail,int element){
    if(tail==NULL){
        cout<<"list is already empty";
        return;
    }else{
    //suppose element is present in list
    Node* prev=tail;
    Node* curr=tail->next;
    while(curr->data!=element){
        prev=curr;
        curr=curr->next;
    }
     if(tail==curr){
        tail=prev;
    }
     if(curr==prev){
        tail=NULL;
    }
        // yani elemet mil gya hai or Curr usko point kr rha hai
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
    

};
void print(Node* tail){
    if(tail==NULL){
        cout<<"lits is empty";
        return;
    }
    Node* temp=tail;
    cout<<"circluar list is like: ";
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=tail); // cycle complere
    cout<<endl;

   
};
int main(){
    Node* tail=NULL;
    insertNode(tail,5,3);
    
    print(tail);
    deleteNode(tail,3);
    print(tail);

};

