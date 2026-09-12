#include <iostream>
using namespace std;

class Human{
    protected:
    int health;
    public:
    int age;
    int weight;;
    int height;
    public:
    int getAge(){
        return this->age;
    }
    void setAge(int age){
        this->age=age;
    }
};
class Male:protected Human{
    public:
    string color;
    void detail(){
        cout<<"weight: "<<weight<<endl;
        cout<<"height: "<<height<<endl;
        cout<<"health: "<<health<<endl;
    }
};
int main(){
   Male m1;
   m1.detail();
   
   
}