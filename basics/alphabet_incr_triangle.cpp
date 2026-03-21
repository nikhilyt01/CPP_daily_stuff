#include <iostream>
using namespace std;

int main() {
  cout << "Enter the number of rows: ";
  int n;                                                 //output :A 
  cin >> n;                                             //         B C
  int row = 1;                                          //         D E F 
  char ch = 'A';
  

  for (row = 1; row <= n; row++) {
    
    for (int col = 1; col <= row; col++) {
      cout << ch << " ";
      ch++;
    }
    cout << endl;
  }
}