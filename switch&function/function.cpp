//set bit of a and b
#include <iostream>
using namespace std;

int setBit(int n){
    int count=0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    return count;
}
int countSetBits(int a,int b){
    int countA=setBit(a);
    int countB=setBit(b);
    return countA+countB;
}

int main(){
    int a,b;
    cout<< "Enter value of a:";
    cin >> a;
    cout<< "enter value of b:";
    cin>> b;
    cout<< "Total set bits in "<< a << " and " << b << " is: " << countSetBits(a,b) << endl;
    return 0;
}