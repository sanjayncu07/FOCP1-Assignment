#include <stdio.h>

void swapUsingTemp(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void swapUsingArithmetic(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void swapUsingXOR(int *a, int *b) {
    if (a != b) {
        *a = *a ^ *b;
        *b = *a ^ *b;
        *a = *a ^ *b;
    }
}

void swapUsingPointer(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int main() {
    int x, y;

    printf("enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("before swapping: x = %d, y = %d\n", x, y);

    swapUsingTemp(&x, &y);
    printf("after swapping with temp variable: x = %d, y = %d\n", x, y);

    swapUsingArithmetic(&x, &y);
    printf("after swapping with arithmetic: x = %d, y = %d\n", x, y);

    swapUsingXOR(&x, &y);
    printf("after swapping with xor: x = %d, y = %d\n", x, y);

    swapUsingPointer(&x, &y);
    printf("after swapping with pointer: x = %d, y = %d\n", x, y);

    return 0;
}
