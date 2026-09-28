#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    void speak(){
        cout<<"speaking"<<endl;
    }

};
class Dog:public Animal{
    public:
    void bark(){
        cout<<"barking"<<endl;
    }

};
int main(){
    Dog d;
    d.age=5;
    cout<<d.age<<endl;
};