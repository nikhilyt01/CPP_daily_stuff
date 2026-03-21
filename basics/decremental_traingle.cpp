#include <iostream>
using namespace std;

// D
// C D
// B C D
// A B C D
int main() {
  cout << "Enter the number of rows: ";
  int n;
  cin >> n;
  
  

  for (int row=1; row<=n; row++) {
    char start = 'A'+ n - row ; // for n=4, start = 'A' + 4 - 1 = 'D'
    for (int col = 1; col <= row; col++) {
        cout << char(start) << " ";
        start++;

    }
    cout << endl;
  }
}
