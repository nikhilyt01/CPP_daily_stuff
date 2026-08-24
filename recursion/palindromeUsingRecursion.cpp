#include<iostream>
using namespace std;

bool pal(string &str,int i ,int j){
    
    if(i>j){
        return true;
    }
    if(str[i] != str[j]){
        return false;

    }
    else{
        return pal(str,i+1,j-1);
    }



}
int main(){
    string name="naman";
    if(pal(name,0,name.length()-1)){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not palindrome"<<endl;
    }
    
    
}