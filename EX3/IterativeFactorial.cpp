


#include <iostream>
#include <ctime>
using namespace std;

long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i; // Multiply iteratively
    }
    return result;
}

int main() {
    int n;
    cout << "Enter an integer to compute factorial iteratively: ";
    cin >> n;

    time_t start = time(0); // Start timing
    long long result = factorial(n); // Compute factorial
    time_t end = time(0); // End timing

    cout << "Factorial of " << n << " is " << result << "\n";
    cout << "Time taken: " << difftime(end, start) << " seconds\n";
    return 0;
}
