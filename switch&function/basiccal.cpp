#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout << "Enter value of a:";
    cin >> a;
    cout << "Enter balueof B:";
    cin >> b;
    char op;
    cout << "Enter the opertion you want to perform: +, -, *, /,% :";
    cin >> op;
    switch(op){
        case '+':
            cout<< "sum :"<< (a+b) <<endl;
            break;
        case '-':
            cout<< "difference:"<< (a-b) << endl;
            break;
        case '*':
            cout << "product:"<< (a*b) << endl;
            break;
        case '/':
            if(b==0){
                cout << "Division by zero is not allowed." << endl;
            }
            else{
                cout << "quotient:"<< (a/b) << endl;
            }
            break;

        case '%':
            if(b==0){
                cout << "Modulus by zero is not allowed." << endl;
            }
            else{
                cout << "remainder:"<< (a%b) << endl;
            }
            break;
        default:
            cout << "Invalid operator" << endl;
       }


}