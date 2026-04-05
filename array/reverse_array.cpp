#include <iostream>
using namespace std;

void printarray(int arr[],int size){
    for (int i=0;i<size;i++){
        cout <<arr[i] <<" ";
    }
    cout << endl;
}

int main(){
    int n;
    cout << "Enter the size  of array :";
    cin>> n;

    int arr[n];
    cout <<"Enter the elements of array:";
    for (int i=0;i<n;i++){
        cin>> arr[i];
    }
    cout << "original array:";
    printarray(arr,n);

    cout <<"\n Reversed Array:";
    int start =0;
    int end=n-1;
    while(start <=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    printarray(arr,n);
        return 0;
}