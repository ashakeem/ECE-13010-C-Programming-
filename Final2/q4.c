#include <stdio.h>
#include <math.h>

//  pi using the given series helper
double computePi(double epsilon) {
    double pi = 0.0;
    int i = 0;
    double term;
    
    do {
        term = (4.0 / (2 * i + 1)) * (i % 2 == 0 ? 1 : -1); 
        pi += term; // Add the term to pi
        i++;
    } while (fabs(term) >= epsilon);

    printf("Computed Pi: %.10f\n", pi);
    printf("Number of terms used: %d\n", i);
    return pi;
}

int main() {
    // initialize epsilon values
    double epsilon1 = 1e-5; // 0.00001
    double epsilon2 = 1e-7; // 0.0000001

    // epsilon = 1e-5
    printf("For EPSILON = 1e-5:\n");
    computePi(epsilon1);

    // epsilon = 1e-7
    printf("\nFor EPSILON = 1e-7:\n");
    computePi(epsilon2);

    return 0;
}
