#include <stdio.h>
#include <stdlib.h>

// GCD using Euclid's algorithm and counting steps
int EuclidWithSteps(int a, int b, int *steps) {
    if (b == 0) {
        return a; // Base case: GCD found
    } else {
        (*steps)++; // Increment step counter
        return EuclidWithSteps(b, a % b, steps); // Recursive call
    }
}

int main() {
    int steps;

    // (a)
    int a1 = 1160718174, b1 = 316258250;
    steps = 0; 
    int gcd1 = EuclidWithSteps(abs(a1), abs(b1), &steps);
    printf("GCD of %d and %d is %d, and it takes %d steps.\n", a1, b1, gcd1, steps);

    // (b)
    int a2 = 316258250, b2 = 1160718174;
    steps = 0;
    int gcd2 = EuclidWithSteps(abs(a2), abs(b2), &steps);
    printf("GCD of %d and %d is %d, and it takes %d steps.\n", a2, b2, gcd2, steps);

    // (c)
    int a3 = 13579, b3 = 24680;
    steps = 0; 
    int gcd3 = EuclidWithSteps(abs(a3), abs(b3), &steps);
    printf("GCD of %d and %d is %d, and it takes %d steps.\n", a3, b3, gcd3, steps);

    // (d)
    int a4 = 357, b4 = 135;
    steps = 0; 
    int gcd4 = EuclidWithSteps(abs(a4), abs(b4), &steps);
    printf("GCD of %d and %d is %d, and it takes %d steps.\n", a4, b4, gcd4, steps);

    return 0;
}
