#include <stdio.h>
#include <math.h>

// cosine calculation helper function
double lawOfCosine(double b, double c, double a) {
   
    double cosA = (b*b + c*c - a*a) / (2 * b * c);
    

    return acos(cosA) * (180.0 / M_PI);
}

int main() {
    double a, b, c, A, B, C, sum;

    // first triangle (3, 4, 5)
    a = 3; b = 4; c = 5;
    A = lawOfCosine(b, c, a);
    B = lawOfCosine(c, a, b);
    C = lawOfCosine(a, b, c);
    sum = A + B + C;
    printf("For triangle (3, 4, 5):\n");
    printf("Angle A = %.2f degrees\n", A);
    printf("Angle B = %.2f degrees\n", B);
    printf("Angle C = %.2f degrees\n", C);
    printf("Sum of angles = %.2f degrees\n", sum);

    //  second triangle (3, 3, 3) (equilateral)
    a = b = c = 3;
    A = lawOfCosine(b, c, a);
    B = lawOfCosine(c, a, b);
    C = lawOfCosine(a, b, c);
    sum = A + B + C;
    printf("\nFor triangle (3, 3, 3):\n");
    printf("Angle A = %.2f degrees\n", A);
    printf("Angle B = %.2f degrees\n", B);
    printf("Angle C = %.2f degrees\n", C);
    printf("Sum of angles = %.2f degrees\n", sum);

    return 0;
}
