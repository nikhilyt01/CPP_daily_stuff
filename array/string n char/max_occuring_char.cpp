#include<iostream>
#include<string>
using namespace std;

char getMaxOccuringChar(string str) {
    // code here
    int arr[26]={0};
    int num=0;
    for(int i=0;i<str.length();i++){
        num=str[i]-'a';
        arr[num]++;
    }
    int maxi=-1;
    int ans=0;
    for(int i=0;i<26;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
            ans= i ;
        }
        
    }
    return ans+'a';
}
int main(){
    char str[100];
    cout<<"enter string:";
    cin.getline(str,100);
    cout<<"max occuring char is:"<< getMaxOccuringChar(str)<<endl;
}