#include <stdio.h>

// helper function
int sum(int n) {
    int total = 0;
    for (int i = 1; i <= n; i++) {
        total += i;
    }
    return total;
}

void sum_backwards(int n) {
    int total = 0;
    for (int i = n; i >= 1; i--) {
        total += i;
        printf("Sum of %d + %d + ... + 1 is %d in iteration %d\n", n, i, total, n - i + 1);
    }
}

int main() {
    int n;
   
    printf("Enter an integer n: ");
    scanf("%d", &n);
   
    printf("Sum from 1 to %d is: %d\n", n, sum(n));
  
    printf("Calculating sum backwards:\n");
    sum_backwards(n);

    return 0;
}
