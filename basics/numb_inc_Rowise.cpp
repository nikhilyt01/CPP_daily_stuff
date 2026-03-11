#include <iostream>
using namespace std;

// 1
// 2 3
// 3 4 5
// 4 5 6 7
int main() {
  cout << "Enter the number of rows: ";
  int n;
  cin >> n;
  int row = 1;
  

  for (row = 1; row <= n; row++) {
    
    for (int col = 1; col <= row; col++) {
      cout << (row + col - 1) << " ";
     
    }
    cout << endl;
  }
}