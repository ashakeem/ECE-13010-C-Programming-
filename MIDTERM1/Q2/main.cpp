#include <stdio.h>
#include <stdbool.h>

//  validate sides
bool isTriangle(double a, double b, double c) {
    if (a > 0 && b > 0 && c > 0 && a + b > c && b + c > a && c + a > b) {
        return true;
    } else {
        return false;
    }
}

int main() {
    // the 4 test cases
    double sides[5][3] = {
        {3, 4, 5},    // valid triangle (a)
        {3, 3, 4},    // valid triangle (b)
        {3, 6, 9},    // not a triangle (c)
        {5, 5, 6},    // valid triangle (d)
        {5, 1, 3}     // not a triangle (e)
    };

    // Run Tests
    for (int i = 0; i < 5; i++) {
        double a = sides[i][0], b = sides[i][1], c = sides[i][2];
        if (isTriangle(a, b, c)) {
            printf("The sides (%.1f, %.1f, %.1f) form a valid triangle.\n", a, b, c);
        } else {
            printf("The sides (%.1f, %.1f, %.1f) do not form a triangle.\n", a, b, c);
        }
    }

    return 0;
}
