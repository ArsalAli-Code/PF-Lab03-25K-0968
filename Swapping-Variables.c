## WITH THIRD VARIABLE

#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

## WITHOUT THIRD VARIABLE

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

