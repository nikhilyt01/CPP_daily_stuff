#include<iostream>
using namespace std;
int main(){
    cout << "Enter the number of  Rows:";
    int n;
    cin >> n;
    int row =1;
    while (row<=n){
        int col=1;
        while(col<=row){
            cout<< char(col+64) << " ";
            col++;
        }
        cout<< endl;
        row++;
    }

}