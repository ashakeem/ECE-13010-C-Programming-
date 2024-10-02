#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    // Part a: Sum of even numbers from 2 to 50
    int sum = 0;
    for (int i = 2; i <= 50; i += 2) {
        sum += i;
    }
    printf("The sum of even numbers from 2 to 50 is: %d\n", sum);
    
    // Part b: Factorial of 3 and 5
    printf("3! = %d\n", factorial(3));
    printf("5! = %d\n", factorial(5));
    
    return 0;
}
