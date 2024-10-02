#include <stdio.h>

int main() {
    // Part a: using literals
    printf("The product of 12, 34, and 56 is: %d\n", 12 * 34 * 56);
    
    // Part b: using variables
    int x = 12, y = 34, z = 56;
    printf("The product of %d, %d, and %d is: %d\n", x, y, z, x * y * z);
    
    // Part c: using input
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("The product of %d, %d, and %d is: %d\n", a, b, c, a * b * c);
    
    return 0;
}
