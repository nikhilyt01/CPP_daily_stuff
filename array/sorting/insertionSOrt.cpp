#include<iostream>
using namespace std;
void insertionSort(int arr[], int n) {
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(j;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}
int main(){
    int arr[]={12,43,4,34,54,11,23};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);
    cout << "sorted array is:";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}