#include <iostream> 
using namespace std;

int main(){
    stack<string> s;
    s.push("Nikhil");
    s.push("kumar");
    s.push("Singh");
    cout<<"Top Element ->"<< s.top()<<endl;
    s.pop();
    cout<<"Top Element ->"<< s.top()<<endl;
    s.pop();
    cout<<"Top Element ->"<< s.top()<<endl;
    cout<<"size of stack-->"<< s.size()<<endl;
    cout<< "Is stack empty ? -->"<<s.empty()<< endl;
    cout<<"capacity of stack-->"<< s.capacity()<<endl;
}