#include <stdio.h>
int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int index = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 99) {
            index = i;
            break;
        }
    }
    if(index != -1)
        printf("First 99 found at Index %d\n", index);
    else
        printf("99 not found\n");
    return 0;
}
