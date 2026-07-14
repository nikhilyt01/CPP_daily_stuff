#include <iostream>
using namespace std;    

char tolowerCase(char ch ){
    if((ch>='a'&& ch<='z')||(ch >='0' && ch <='9')){
        return ch;
    }
    else{
        char temp= ch -'A' + 'a';
        return temp;
    }
}
bool checkPalindrome(char a[],int n){

    int s=0;
    int e=n-1;
    while(s<e){
        if((tolowerCase(a[s])) != (tolowerCase(a[e]))){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char a[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(a[s++],a[e--]);
    }
}
int getLength(char a[]){
    int n=0;
    for(int i=0;a[i]!='\0';i++){
        n++;
    }
    return n;
}
int main(){

    char a[20];
    cout<<"enter string :";
    cin>>a;
    int n=getLength(a);
    cout<<"length of string is :"<<n<<endl;
    reverse(a,n);
    cout<<"reversed string is :"<<a<<endl;
    if(checkPalindrome(a,n)){
        cout<<"string is palindrome"<<endl;
    }
    else{
        cout<<"string is not palindrome"<<endl;
    }
    return 0;

    
 
}