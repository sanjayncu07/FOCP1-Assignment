#include <stdio.h>

int main() {
    int a, b, hcf, min;

    printf("enter 2 numbers: ");
    scanf("%d %d", &a, &b);

    if (a < b)
        min = a;
    else
        min = b;
    for (int i = 1; i <= min; i++) {
        if (a % i == 0 && b % i == 0)
            hcf = i;
    }
    printf("hcf of %d and %d is %d\n", a, b, hcf);
    return 0;
}
