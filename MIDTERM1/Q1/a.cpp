#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter an integer n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum from 1 to %d using for loop is: %d\n", n, sum);

    sum = 0;
    int i = 1;
    while (i <= n) {
        sum += i;
        i++;
    }

    printf("Sum from 1 to %d using while loop is: %d\n", n, sum);

    return 0;
}
