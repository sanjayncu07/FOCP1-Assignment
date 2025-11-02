#include <stdio.h>
#include <math.h>

int main() {
    int num, originalnum, rem, result = 0, n = 0, temp;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalnum = num;
    temp = num;
    while (temp != 0) {
        n++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        rem =  temp % 10;
        result += pow(rem, n);
        temp /= 10;
    }

    if (result == num)
        printf("%d is armstrong number\n", num);
    else
        printf("%d is not Armstrong number\n", num);

    return 0;
}
