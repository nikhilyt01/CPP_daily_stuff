#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<string> q;
    q.push("Nikhil");
    q.push("Kumar");
    q.push("Singh");
    cout<<"first element --> "<<q.front()<< endl;
    q.pop();
    cout<<"first element --> "<<q.front()<< endl;
    cout<< "size of queue-->"<<q.size()<<endl;
}