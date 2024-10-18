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

int main() {
    int x;
    cout << "Enter an integer: ";
    cin >> x;

    printSolidSquare(x);

    return 0;
}
