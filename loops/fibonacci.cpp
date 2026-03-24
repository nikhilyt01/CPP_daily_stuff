#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter number of terms :";
    cin >>n;
    int a=0;
    int b=1;
    cout << "Fibonacci series :";
    cout << a << "  "<< b<< " ";
    
    for(int i=1;i<=n;i++){
        int NextTerm=a+b;
        cout << NextTerm << " ";
        a=b;
        b=NextTerm;
       
}
}