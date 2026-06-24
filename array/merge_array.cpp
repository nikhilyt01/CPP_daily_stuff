#include <iostream>
using namespace std;

void mergeArray(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i=0,j=0,k=0;
    while(i<n && j<m){

        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else{
            arr3[k++]=arr2[j++];
        }
    }
        //if arr1 has more elements
    while(i<n){
            arr3[k++]=arr1[i++];

    }
    while(j<m){
            arr3[k++]=arr2[j++];

    }
        
    
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<< arr[i]<< " ";
    }
}

int main(){
    int arr1[5]={1,2,2,7,9};;
    int arr2[3]={2,2,6};
    int arr3[8]={0};
    mergeArray(arr1,5,arr2,3,arr3);
    printArray(arr3,8); 

    return 0;

}