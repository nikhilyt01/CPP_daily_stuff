#include<iostream>
using namespace std;

void printArray(int arr[],int n){
  cout<<"size of array now is :"<<n<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }cout<<endl;
}
bool BinaryS(int arr[],int s,int e,int k){
   
    if(s>e){
        return -1;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==k){
        return true;
    }

    if(arr[mid]>k){
       return BinaryS(arr,s,mid-1,k);
    }
    else{
       return BinaryS(arr,mid+1,e,k);
    }
 
}
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int size=8;
    int key=5;
    


    if(BinaryS(arr,0,7,key)){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found";
    }

    return 0;
   

}