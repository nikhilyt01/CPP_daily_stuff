#include<iostream>
using namespace std;

class Animal{
    public:
    int weight;
    int age;
    void bark(){
        cout<<"barking"<<endl;
    }

};
class Human{
    public:
    int color;
    void speak(){
        cout<<"speaking"<<endl;
    }

};
class Hybrid:public Animal,public Human{

};

int main(){
    Hybrid obj;
    obj.bark();
    obj.speak();
   
};