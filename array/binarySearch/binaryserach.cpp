#include <iostream>
using namespace std;

int BinarySearch(int arr[],int size,int key){
    int start=0,end=size-1;
    while(start<=end){
        int mid=start + (end-start)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    
    }
    return -1;
}

int main(){
    int even[6]={2,4,6,8,10,12};
    int odd[5]={1,3,5,7,9};
    int index= BinarySearch(even,6,10);
    cout << "index of 10 is " << index <<endl;

}