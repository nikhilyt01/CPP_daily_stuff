#include <iostream>
using namespace std;

void reachHome(int src,int dist){
    cout<<"Source: "<<src<<" Distance: "<<dist<<endl;
    if(src==dist){
        cout<<"Reached Home"<<endl;
        return;
    }
    src++;
    reachHome(src,dist);
}
int main(){
    int src=1;
    int dist=10;

    reachHome(src,dist);
}