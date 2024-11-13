

#include <iostream>
#include <ctime>
using namespace std;

long long factorial(int n) {
    if (n == 0 || n == 1) return 1; // Base case
    return n * factorial(n - 1); // Recursive call
}

int main() {
    int n;
    cout << "Enter an integer to compute factorial recursively: ";
    cin >> n;

    time_t start = time(0); // Start timing
    long long result = factorial(n); // Compute factorial
    time_t end = time(0); // End timing

    cout << "Factorial of " << n << " is " << result << "\n";
    cout << "Time taken: " << difftime(end, start) << " seconds\n";
    return 0;
}
