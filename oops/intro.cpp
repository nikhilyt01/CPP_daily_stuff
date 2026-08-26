#include<iostream>

using namespace std;

class Hero{
    
    int health=0;
    public:
    char level='A';
    Hero(){
        cout<<"constructor called"<<endl;
    }
    //parameterized constructor
    Hero(int health){
    cout<<"this->"<<this<<endl;
    this->health=health;
   }   
    void setHealth(int h){
        health=h;
    }
    int getHealth(){
        return health;
    }
    
};

int main(){
    //static allocation
    Hero a;
    cout<<"level is:"<<a.level<<endl;
    cout<<"health is:"<<a.getHealth()<<endl ;
    //dynamic allocation
    Hero *b=new Hero(100);
    cout<<"level now is:"<< (*b).level<<endl; // dereferencing pointer *p point to object
    cout<<"health now is:"<< b ->getHealth() ;
    cout<<"------------------------"<<endl;
    Hero ramesh(18);
    cout<<"address ramesh same as This value that it point :";
    cout<<&ramesh<<endl;
    

}

   
