#include <stdio.h>

//  sum from 1 to n  helper function
int sum(int n) {
    int total = 0;
    for (int i = 1; i <= n; i++) {
        total += i;
    }
    return total;
}

int main() {
    int n;

    printf("Enter an integer n: ");
    scanf("%d", &n);
    
    printf("Sum from 1 to %d using sum function is: %d\n", n, sum(n));

    return 0;
}
