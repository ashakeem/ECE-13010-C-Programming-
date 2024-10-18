#include <iostream>
using namespace std;

void printSolidSquare(int x) {
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < x; ++j) {
            cout << "%";
        }
        cout << endl;
    }
}

void printHollowSquare(int x) {
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < x; ++j) {
            if (i == 0 || i == x - 1 || j == 0 || j == x - 1) {
                cout << "%";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

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
    cout << "Enter an integer for the square: ";
    cin >> x;

    cout << "\nSolid Square:\n";
    printSolidSquare(x);

    cout << "\nHollow Square:\n";
    printHollowSquare(x);

    cout << "\nEnter an integer to reverse: ";
    cin >> x;

    int reversed = reverseDigits(x);
    cout << "Reversed number: " << reversed << endl;

    return 0;
}
