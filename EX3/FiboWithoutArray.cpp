

#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int n;
    cout << "Input an integer \n"; // Input the number of Fibonacci numbers to generate
    cin >> n;

    long long a = 0, b = 1, c; // Initialize variables
    time_t start = time(0); // Start timing

    cout << "List of first " << n << " Fibonacci numbers:\n";
    cout << a << " " << b << " "; // Print the first two Fibonacci numbers
    for (int i = 2; i < n; i++) {
        c = a + b; // Compute the next Fibonacci number
        cout << c << " ";
        a = b; // Update variables for next iteration
        b = c;
    }
    time_t end = time(0); // End timing
    cout << "\nTime taken: " << difftime(end, start) << " seconds\n";

    return 0;
}
