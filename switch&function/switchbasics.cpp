#include <iostream>
using namespace std;

//if bresak not used all the folloow through will be executed
int main(){
    int num=2;
    switch(num){
        case 1:
            cout << "one" << endl;
        
        case '1':
             cout << "one as a character" << endl;
             
        case 2:
            cout << "two" << endl;
            break;
        
        default:
            cout << "Invalid number" << endl;
    }
}