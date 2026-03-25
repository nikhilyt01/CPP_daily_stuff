#include <iostream>
using namespace std;    
int main(){
    int n=234;
    int prod=1,sum=0;
        while(n!=0){
            int digit=n%10;
            prod *=digit;
            sum +=digit;
            n=n/10;
        }
        int ans=prod - sum;
        cout << ans<< endl;

}