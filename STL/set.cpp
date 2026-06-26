#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int> s;
    s.insert(1);
    s.insert(0);
    s.insert(4);
    s.insert(6);
    s.insert(6);
    for (auto i:s){
        cout<< i<< endl;
    }
    cout<< endl;
    s.erase(s.begin()); // will dlt 1st element 

    set<int>:: iterator it=s.begin(); // dlt any element 
    it++;
    s.erase(it);
    for (auto i:s){
        cout<< i<< endl;
    }
    cout<< endl;
    cout<< "6 is present or not ? --> "<<s.count(6)<< endl;
}
