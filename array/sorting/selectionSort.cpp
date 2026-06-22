#include<iostream>
using namespace std;

void ss(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIndx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndx]){
                minIndx=j;
            }
        }
        swap(arr[i],arr[minIndx]);
    }

}
int main(){
    int arr[]={12,43,4,34,54,11,23};
    int n=sizeof(arr)/sizeof(arr[0]);
    ss(arr,n);
    cout << "sorted array is:";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}