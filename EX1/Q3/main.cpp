#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }

    cout << "Sum from 1 to 100 using for loop is: " << sum << endl;

    return 0;
}