#include <iostream>
using namespace std;    

int main(){
    int amount=1330;
    int notes=0;
    cout<< "Amount: "<< amount << endl;
    int choice=1;
    switch(choice){
        case 1:
             notes=amount/100;
             amount=amount%100;
             cout<< "100 notes:"<< notes <<endl;
        case 2:
             notes=amount/50;
             amount=amount%50;
             cout<< "50 notes:"<< notes <<endl;
        case 3:
              notes=amount/20;
              amount=amount%20;
              cout<< "20 notes:"<< notes <<endl;
        
        case 4:
             notes=amount/1;
             amount=amount%1;
             cout<< "1 rupee notes:"<< notes <<endl;
    }
}
