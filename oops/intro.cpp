#include<iostream>

using namespace std;

class Hero{
    char level;
    int health=0;
    public:
   

    void setHealth(int h){
        health=h;
    }
    void getHealth(){
        cout<<"Health:"<<health<<endl;
    }
    
};

int main(){
    Hero a;
    a.getHealth();
    a.setHealth(70);
    a.getHealth();
    


}

   
