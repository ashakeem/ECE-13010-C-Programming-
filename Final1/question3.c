// having errors with code so I re-implimented it

#include <stdio.h>
#include <math.h>

#define ZERO 1.0E-20
#define true 1
#define false 0

double F(double x) {
    return x * x * x - x - 1.0;
}

double absval(double val) {
    return val >= 0 ? val : -val;
}

int main() {
    double A, B, TOL, P, FP, FA, FB, C;
    int I, NO, OK;

    printf("This is the Bisection Method.\n");
    printf("Input endpoints A < B separated by a space (e.g., 1 2): ");
    scanf("%lf %lf", &A, &B);

    if (A > B) {
        double temp = A;
        A = B;
        B = temp;
    }

    FA = F(A);
    FB = F(B);

    if (FA * FB >= 0) {
        printf("Invalid interval: F(A) and F(B) must have opposite signs.\n");
        return -1;
    }

    printf("Input tolerance (e.g., 1e-7): ");
    scanf("%lf", &TOL);

    printf("Input maximum number of iterations: ");
    scanf("%d", &NO);

    printf("\nIter     Midpoint (P)         F(P)\n");
    printf("====================================\n");

    for (I = 1; I <= NO; I++) {
        C = (B - A) / 2.0;
        P = A + C;
        FP = F(P);

        printf("%3d   %15.8f   %15.8f\n", I, P, FP);

        if (absval(FP) < TOL || C < TOL) {
            printf("\nApproximate solution P = %.8f\n", P);
            printf("F(P) = %.8f\n", FP);
            printf("Number of iterations = %d\n", I);
            printf("Tolerance = %.8e\n", TOL);
            return 0;
        }

        if (FA * FP < 0) {
            B = P;
            FB = FP;
        } else {
            A = P;
            FA = FP;
        }
    }

    printf("\nMethod failed after %d iterations.\n", NO);
    return 0;
}
