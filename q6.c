#include <stdio.h>
#include <math.h>

int binToDec(long long bin) {
    int dec = 0, i = 0, rem;
    while (bin != 0) {
        rem = bin % 10;
        dec += rem * pow(2, i);
        bin /= 10;
        i++;
    }
    return dec;
}

long long decToBin(int dec) {
    long long bin = 0;
    int rem, i = 1;
    while (dec != 0) {
        rem = dec % 2;
        dec /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}
int main() {
    int choice;
    printf("Choose 1 for binary to decimal, 2 for decimal to binary: ");
    scanf("%d", &choice);
    if (choice == 1) {
        long long bin;
        printf("Enter binary number: ");
        scanf("%lld", &bin);
        printf("decimal: %d\n", binToDec(bin));
    } else if (choice == 2) {
        int dec;
        printf("enter decimal number: ");
        scanf("%d", &dec);
        printf("binary: %lld\n", decToBin(dec));
    } else {
        printf("invalid choice\n");
    }
    return 0;
}
