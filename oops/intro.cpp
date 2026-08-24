#include<iostream>

using namespace std;

class Hero{
    
    int health=0;
    public:
    char level='A';
   

    void setHealth(int h){
        health=h;
    }
    int getHealth(){
        return health;
    }
    
};

int main(){
    Hero a;
    cout<<"level is:"<<a.level<<endl;
    cout<<"health is:"<<a.getHealth()<<endl ;
    Hero *b=new Hero;
    cout<<"level now is:"<< (*b).level<<endl;
    cout<<"health now is:"<< b ->getHealth() ;

   
    


}

   
