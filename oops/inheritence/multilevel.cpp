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
class GermanShepherd:public Dog{
    public:
    void run(){
        cout<<"running"<<endl;
    }
};
int main(){
    GermanShepherd g;
    g.age=5;
};