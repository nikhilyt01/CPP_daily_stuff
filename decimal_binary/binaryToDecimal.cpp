#include <iostream>
using namespace std;

int main(){
    cout << "enter the Binary number:";
    int n;
    cin >> n;
    int ans=0;
    int i=0;
    while(n !=0){
        int lastDigit = n%10; // gives the last digit of the number
        if(lastDigit !=0 && lastDigit !=1){
            cout << "Invalid Binary number" << endl;
            return 0;
        }
       if(lastDigit ==1){
         ans = ans+pow(2,i);
       }
       n=n/10;
       i++;

    }
    cout << "decimal Value:"<< ans<< endl;
}