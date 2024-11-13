#include <iostream>
using namespace std;

int main() {
    int a = 3, b = 4, c;
    // Incorrect swapping as previous value of a is not stored
    cout << "Incorrect swapping:" << endl;
    a = b;
    b = a;
    cout << "a = " << a << ", b = " << b << endl;

    // Correct swapping using temp variable
    cout << "Correct swapping:" << endl;
    a = 3; b = 4; // Reset values
    c = a;
    a = b;
    b = c;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
