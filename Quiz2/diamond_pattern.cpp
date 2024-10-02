
#include <iostream>
using namespace std;

void printDiamond(int n) {
    int space = n - 1;

    // Upper part of the diamond
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= space; j++) {
            cout << " ";
        }
        space--;

        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part of the diamond
    space = 1;
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= space; j++) {
            cout << " ";
        }
        space++;

        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter an integer (n): ";
    cin >> n;
    printDiamond(n);
    return 0;
}
