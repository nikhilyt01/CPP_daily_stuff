#include <iostream>
using namespace std;

class Student{
    string name;
    int age;
    int height;
    public:
    int getAge(){
        return this->age;
    }
};
int main(){
    Student s;
    s.name='nikhil';//error as name is private member
    cout<<"everything is fine:case encapsulation"<<endl;
    return 0;

}
