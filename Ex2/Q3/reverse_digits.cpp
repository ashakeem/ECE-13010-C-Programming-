#include <iostream>
using namespace std;

int reverseDigits(int number) {
    int reversed = 0;
    while (number != 0) {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }
    return reversed;
}

int main() {
    int x;
    cout << "Enter an integer: ";
    cin >> x;

    int reversed = reverseDigits(x);
    cout << "Reversed number: " << reversed << endl;

    return 0;
}
