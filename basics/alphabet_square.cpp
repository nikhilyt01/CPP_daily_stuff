#include <iostream>
using namespace std;

int main() {
  cout << "Enter the number of rows: ";
  int n;
  cin >> n;
  int row = 1;

  while (row <= n) {
    int col = 1;
    while (col <= row) {
      cout << char(row + 64) << " "; //col+64 for  A B C 
      col++;                                    // A B C
    }
    cout << endl;
    row++;
  }
}