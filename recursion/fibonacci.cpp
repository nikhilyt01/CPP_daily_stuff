#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n==0 || n==1){ //base case
        return n;
    }
    int ans=fibonacci(n-1)+fibonacci(n-1);
    return ans;

}
int main(){
    cout<<"enter the index of fibonacci series to find value (0th index is followed) :"<<endl;
    int n;
    cin>> n;
    int ans=fibonacci(n);
    cout<<"the value at index"<<n<<"is :"<<ans<<endl;

}