// given int array of size N, where N is = 2M+1 , M has twice appearence and one element has unique appearence, find the unique element in array
#include <iostream>
using namespace std;

void printarray(int arr[],int size){
    cout<< "Array:";
    for (int i=0;i<size;i++){
        cout <<arr[i] <<" ";
    }
    cout << endl;
}

int findUnique(int arr[],int size){
    int ans=0;
    for (int i=0;i<size;i++){
        ans=ans ^ arr[i];
    }
    return ans;
}
int main(){
    int arr[5]={1,2,9,2,1};
    int size=5;
    printarray(arr,size);
    int unique=findUnique(arr,size);
    cout<< "Unique element in array is:" << unique << endl;

    return 0;


}