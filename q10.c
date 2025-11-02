#include <stdio.h>
int main() {
    int n, count = 0;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter marks: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("students scoring 99 are at indexes ");
    for (int i = 0; i < n; i++) {
        if (arr[i] == 99) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\ntotal students scoring 99: %d\n", count);

    return 0;
}
