#include <stdio.h>

int main() {
    int n, pos;
    printf("enter size: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter elements: ");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("enter position to delete (0-front,1-middle,2-end): ");
    scanf("%d", &pos);

    int delPos;
    if(pos == 0)
        delPos = 0;
    else if(pos == 1)
        delPos = n/2;
    else
        delPos = n-1;

    if(n == 0) {
        printf("Array empty\n");
        return 0;
    }

    for(int i = delPos; i < n-1; i++)
        arr[i] = arr[i+1];
    n--;

    printf("Array after deletion: ");
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
