#include <stdio.h>
#include <math.h>

// series expansion for arctan(x) helper
double computeArctan(double x, double epsilon, int *numTerms) {
    double term = x; 
    double sum = term; 
    int k = 1;


    while (fabs(term) >= epsilon) {
        term *= -x * x; 
        term /= (2 * k + 1); 
        sum += term; 
        k++;
    }

    *numTerms = k; 
    return sum;
}

int main() {
    double epsilon = 1e-7; 
    int numTerms1 = 0, numTerms2 = 0;

    // Compute arctan(1/2) and arctan(1/3) using the series
    double arctanHalf = computeArctan(0.5, epsilon, &numTerms1);
    double arctanThird = computeArctan(1.0 / 3.0, epsilon, &numTerms2);

    // Combine the results to compute pi
    double pi = 4 * (arctanHalf + arctanThird);

    // Display the results
    printf("Computed pi: %.10f\n", pi);
    printf("Number of terms for arctan(1/2): %d\n", numTerms1);
    printf("Number of terms for arctan(1/3): %d\n", numTerms2);

    return 0;
}
