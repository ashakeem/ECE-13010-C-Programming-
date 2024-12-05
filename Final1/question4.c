#include <stdio.h>
#include <stdlib.h>

// GCD using Euclid's algorithm
int Euclid(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return Euclid(b, a % b);
    }
}

int main() {
    //  (a)
    int a1 = 1160718174, b1 = 316258250;
    printf("GCD of %d and %d is %d\n", a1, b1, Euclid(abs(a1), abs(b1)));

    // (b)
    int a2 = 316258250, b2 = 1160718174;
    printf("GCD of %d and %d is %d\n", a2, b2, Euclid(abs(a2), abs(b2)));

    // (c)
    int a3 = 13579, b3 = 24680;
    printf("GCD of %d and %d is %d\n", a3, b3, Euclid(abs(a3), abs(b3)));

    //  (d)
    int a4 = 357, b4 = 135;
    printf("GCD of %d and %d is %d\n", a4, b4, Euclid(abs(a4), abs(b4)));

    return 0;
}
