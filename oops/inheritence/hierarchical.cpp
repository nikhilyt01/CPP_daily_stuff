#include<iostream>
using namespace std;

class A{
    public:
    void funA(){
        cout<<"funA"<<endl;
    }
};
class B:public A{
    public:
    void funB(){
        cout<<"funcB"<<endl;
    }

};
class C:public A{
    public:
    void funC(){
        cout<<"funC"<<endl;
    }
};
int main(){
  A a;
    a.funA();
  B b;
    b.funA();
    b.funB();
  C c;
    c.funA();
    c.funC();
};