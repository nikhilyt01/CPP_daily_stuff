#include <iostream>
using namespace std;    

void printarray(int arr[],int size){
    for (int i=0;i<size;i++){
        cout <<arr[i] <<" ";
    }
    cout << endl;
}
void swapAlternate(int arr[],int size){
    for(int i=0;i<size;i=i+2){
        if(i+1 <size){
            swap(arr[i],arr[i+1]);
        }
    }
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
    for (int i=0;i<n;i++){
        cout <<arr[i] <<" ";
    }

    cout <<"\n Array after swapping alternate elements:";
    swapAlternate(arr,n);
    printarray(arr,n);
        return 0;
}