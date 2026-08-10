#include<iostream>
using namespace std;

void reverse(string &str,int i ){
    cout<<"string now is: "<<str<<endl;
    int n=str.length();
    if(i>n-1-i){
        return ;
    }
    swap(str[i],str[n-1-i]);
    i++;
    
    reverse(str,i);


}
int main(){
    string name="nikhil";
    reverse(name,0);
    cout<<endl;
    cout<<name<<endl;
    
}