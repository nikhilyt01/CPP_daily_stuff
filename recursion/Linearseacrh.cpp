#include<iostream>
using namespace std;

void printArray(int arr[],int n){
  cout<<"size of array now is :"<<n<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }cout<<endl;
}
bool isFound(int arr[],int n,int k){

    printArray(arr,n); // yaha pe n ka size wo hoga jo isfound me pass ho rha hai Decrement hoke har bar
    if( n==0){ // base case
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    else{
        return isFound(arr+1,n-1,k);
    }
 
}
int main(){
    int arr[5]={1,2,3,1,1};
    int size=5;

    if(isFound(arr,5,3)){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found";
    }

    return 0;
   

}