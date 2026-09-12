#include <iostream>
using namespace std;

class Human{
    private:
     int height;
    protected:
    int health;
    public:
    int age;
    int weight;;
    
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
        cout<<"health: "<<health<<endl;//protected member can be accessed in derived class
    }
    int getHeight(){
       return height;
    }
};
int main(){
   Male m1;
   m1.detail();
   m1.getHeight();
   
   
}