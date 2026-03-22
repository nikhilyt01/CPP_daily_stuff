#include <iostream>
using namespace std;
// - - - - *
// _ _ _ * *
// _ _ * * *
// _ * * * *
// * * * * *
int main(){
    cout << "Enter the number of Rows:";
    int n;
    cin >> n;
    int i=1;
    while(i<=n){
        int spaces = n-i;
        while(spaces){
            cout << "   ";
            spaces--;
        }
        int star = 1;
        while(star<=i){
            cout << " * ";
            star++;
        }
        cout << endl;
        i++;
        
    }
    
}