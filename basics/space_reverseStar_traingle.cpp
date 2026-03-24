// * * * *
// _ * * *
// _ _ * *
// _ _ _ *
#include <iostream>
using namespace std;

int main(){
    cout << "Enter the number of Rows: ";
    int n;
    cin >> n;
    int row =1;
    while(row<=n){
        int spaces = row -1;
        while(spaces){
            cout<< "  ";
            spaces--;
        }
       int start = n +1 -row;
       while(start){
         cout<< row << " ";
         start--;
       }
       cout << endl;
       row++;
        
    }
    
}