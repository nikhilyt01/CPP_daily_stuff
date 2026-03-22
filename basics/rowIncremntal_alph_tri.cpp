#include <iostream>
using namespace std;

int main() {
  cout << "Enter the number of rows: ";
  int n;
  cin >> n;
  int row = 1;
  // A 
  // B C 
  // D E F 

  while (row <= n) {
    int col = 1;                         // can also be done using extra int "value=row "and then 
                                        //        cout << char(value+64) << " "; and then value++
    while (col <= row) { 
      cout << char(row+col-1+64) << " ";
     
      col++;
    }
    cout << endl;
    row++;  
  }
}