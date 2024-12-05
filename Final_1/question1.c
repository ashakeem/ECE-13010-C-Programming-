#include <stdio.h>

int main() {
    // (a)
    int n = 20;
    double probability_a = 1.0;

    for (int i = 0; i < n; i++) {
        probability_a *= (365.0 - i) / 365.0;
    }

    probability_a = 1.0 - probability_a; // product compliment
    printf("Part (a): Probability for 20 people: %.6f\n\n", probability_a);

    // (b)
    printf("Part (b): Printing out probabilities of 2 identical birthdays for 11 to 50 people\n");
    for (int n = 11; n <= 50; n++) {
        double probability_b = 1.0;

        for (int i = 0; i < n; i++) {
            probability_b *= (365.0 - i) / 365.0;
        }

        probability_b = 1.0 - probability_b; // product compliment
        printf("%.6f ", probability_b);

        if ((n - 11 + 1) % 5 == 0) { // Print 5 probabilities per row
            printf("\n");
        }
    }
    printf("\n\n");

    // (c)
    int first_n = 0;
    double probability_c = 1.0;

    for (n = 1; n <= 50; n++) {
        probability_c = 1.0;

        for (int i = 0; i < n; i++) {
            probability_c *= (365.0 - i) / 365.0;
        }

        probability_c = 1.0 - probability_c; // product compliment

        if (probability_c > 0.90) {
            first_n = n;
            break; // terminate at probability > 0.90
        }
    }

    printf("Part (c): First n with probability > 0.90: %d\n", first_n);

    return 0;
}
