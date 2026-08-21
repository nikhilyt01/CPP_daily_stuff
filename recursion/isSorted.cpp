#include<iostream>
using namespace std;
bool issorted(int arr[],int n){
    if(n==1||n==0){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        return issorted(arr+1,n-1); // yaha pe size exclusivly pass kr rhe hai to -1 
    }
}
int main(){
    int array[5]={1,2,3,4,5};
    int size=5;
    if(issorted(array,size)){
        cout<<"Array is sorted";

    }
    else{
        cout<<"not sorted";
    }

}