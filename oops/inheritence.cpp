#include <iostream>
using namespace std;

class Human{
    private: // private Main class hai to anyhow not accessible in subclass i.e line 35 me
     int height;
    protected:
    int health;
    public:
    int age;
    int weight;
    
    public:
    int getAge(){
        return this->age;
    }
    void setAge(int age){
        this->age=age;
    }
    int getHeight(){
        return this->height;
    }
};
class Male:private Human{
    public:
    string color;
    void detail(){
        cout<<"weight: "<<weight<<endl;
        cout<<"health: "<<health<<endl;//protected member can be accessed in derived class
    }
    int getHealth(){
       return this ->health ;
    }
};
int main(){
   Male m1;
   m1.detail();
   cout<<m1.getHealth()<<endl;
   //cout<<m1.getHeight()<<endl;// private can be accessed within class only not even by subclass
   Human h1;
   cout<<h1.getHeight() <<endl;// private can be accessed within class only
   
}