

#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main() {
    int n;
    cout << "Input an integer \n"; // Input the number of Fibonacci numbers to generate
    cin >> n;
    
    long long fibo[100]; // Declare an array to store Fibonacci numbers
    fibo[0] = 0;
    fibo[1] = 1;

    time_t start = time(0); // Start timing
    for (int i = 2; i < n; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2]; // Compute Fibonacci numbers
    }
    time_t end = time(0); // End timing

    cout << "List of first " << n << " Fibonacci numbers:\n";
    for (int i = 0; i < n; i++) {
        cout << fibo[i] << " ";
        if ((i + 1) % 10 == 0) cout << "\n"; // New line after every 10 numbers
    }
    cout << "\nTime taken: " << difftime(end, start) << " seconds\n";

    return 0;
}
