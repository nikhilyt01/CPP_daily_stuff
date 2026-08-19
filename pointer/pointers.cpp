#include<iostream>
using namespace std;

int main(){
    int arr[10]={2,5,6,7};
    int num=6;
    int *p =&num;
    cout <<"address of first memory block:"<<arr<<endl;
    cout<<arr[0]<<endl;//element at 0th index
    cout<<"address of first memory block:"<<&arr[0]<<endl;

    cout<<"4th "<< *arr <<endl;
    cout<<"5th "<< *(arr) +1<<endl;
    cout<<"6th "<< *(arr+1) <<endl;
    cout<<"7th "<<p<<endl;
    cout<<"8th :"<<*p<<endl;
    cout<<"9th :"<<&p<<endl;
    cout<<"num address :"<<&num<<endl;
}