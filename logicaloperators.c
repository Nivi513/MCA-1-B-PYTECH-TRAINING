#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers:\n");
    scanf("%d %d", &a, &b);

    // Logical AND (&&)
    if (a > 0 && b > 0) {
        printf("Both numbers are positive.\n");
    } else {
        printf("At least one number is not positive.\n");
    }

    // Logical OR (||)
    if (a == 0 || b == 0) {
        printf("At least one number is zero.\n");
    } else {
        printf("Neither number is zero.\n");
    }

    // Logical NOT (!)
    if (!(a == b)) {
        printf("Numbers are not equal.\n");
    } else {
        printf("Numbers are equal.\n");
    }

    return 0;
}

