#include<iostream>
using namespace std;
// * * * *
// * * * 
// * * 
// *
int main(){
    cout << "Enter number of Rows: ";
    int n;
    cin >> n;
    int row =1;
    while(row<=n){
        int reverseStar=n+1-row;
        while(reverseStar){
            cout << " * ";
            reverseStar--;
        }
        cout << endl;
        row++;
    }

}