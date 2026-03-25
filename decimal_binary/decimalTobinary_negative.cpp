#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    // Treat n as unsigned so right-shift fills with 0s, allowing n to reach 0
    unsigned int temp = (unsigned int)n; 
    
    string binary = "";

    // We loop 32 times to see the full representation in memory
    for (int i = 0; i < 32; i++) {
        int bit = temp & 1;       // Get the rightmost bit
        binary = to_string(bit) + binary; // Add bit to the FRONT of the string
        temp = temp >> 1;         // Shift right to move to the next bit
    }

    cout << "Binary representation: " << binary << endl;
    return 0;
}