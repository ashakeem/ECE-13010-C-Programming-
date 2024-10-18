#include <iostream>
using namespace std;

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

int main() {
    int x;
    cout << "Enter an integer: ";
    cin >> x;

    printHollowSquare(x);

    return 0;
}
