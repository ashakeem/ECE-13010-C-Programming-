#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter an integer: ";
    cin >> x;

    int result1 = x * x * x + 3 * x * x + 5 * x + 7;
    double result2 = x * x * x + 3 * x * x + 5 * x + 7.2;

    cout << "x^3 + 3x^2 + 5x + 7 = " << result1 << endl;
    cout << "x^3 + 3x^2 + 5x + 7.2 = " << result2 << endl;

    return 0;
}