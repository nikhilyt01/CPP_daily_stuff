#include<iostream>
using namespace std;

void reverse(string &str,int i ,int j){
    cout<<"string now is: "<<str<<endl;
    if(i>j){
        return ;
    }
    swap(str[i],str[j]);
    
    reverse(str,i+1,j-1);


}
int main(){
    string name="nikhil";
    reverse(name,0,name.length()-1);
    cout<<endl;
    cout<<name<<endl;
    
}