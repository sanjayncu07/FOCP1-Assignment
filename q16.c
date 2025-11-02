#include <stdio.h>

int main() {
    int n, arr[100], val, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Array before insertion: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    printf("Enter value to insert: ");
    scanf("%d", &val);
    printf("Enter position (0=front, 1=middle, 2=end): ");
    scanf("%d", &pos);

    int index;
    if (pos == 0)
        index = 0;
    else if (pos == 1)
        index = n / 2;
    else
        index = n;

    for (int i = n; i > index; i--)
        arr[i] = arr[i - 1];

    arr[index] = val;
    n++;

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
