#include<iostream>
using namespace std;

bool ispresent(int arr[][3],int target,int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}
void PrintRowSum(int arr[][3]){
    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<3;col++){
            sum +=arr[row][col];
        }
        cout<<sum<< " "<<endl;
    }
}
void PrintColSum(int arr[][3],int row,int col){
    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<3;col++){
            sum +=arr[row][col];
        }
        cout<<sum<< " "<<endl;
    }
}
int largetRowSum(int arr[][3]){
    int maxi=INT_MIN;
    int ansIndex=0;
      for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<3;col++){
            sum +=arr[row][col];
        }
        if(sum >maxi){
            maxi=sum;
            ansIndex=row;
        }
    }
    cout<<"the maximum sum is "<<maxi<<endl;
    return ansIndex;
}


int main(){
    cout<<"Enter the elements of 2d array"<<endl;
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Printing the elements of 2d array"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Enter the target element to Search"<<endl;
    int target;
    cin>>target;
    if(ispresent(arr,target,3,3)){
        cout<<"Target element is present in the array"<<endl;
    }
    else{
        cout<<"Not present"<<endl;
    }
    cout<<"row sum :";
    PrintRowSum(arr);
    int ansIndex=largetRowSum(arr);
    cout<<"Max row is at index "<<ansIndex;
    return 0;

    

}