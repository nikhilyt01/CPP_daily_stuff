#include<iostream>
using namespace std;

int getPivot(int arr[],int size)
{
    int s=0,e=size-1;
    int mid=s+(e-s)/2;
    while(s<e)
{
    if(arr[mid]>=arr[0]){
        s=mid+1;
    }
    else{
        e=mid;
    }
    mid=s+(e-s)/2;
}
return e+1;
}
int main(){
    int arr[5]={3,8,10,1,2};
    cout << "pivot is at index "<< getPivot(arr,5) << endl;
}