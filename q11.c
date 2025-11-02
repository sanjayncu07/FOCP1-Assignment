#include <stdio.h>

int main() {
    int n;
    printf("Enter number of scores: ");
    scanf("%d", &n);
    int scores[n], even[n], odd[n];
    int e = 0, o = 0;

    for (int i = 0; i < n; i++)
        scanf("%d", &scores[i]);

    for (int i = 0; i < n; i++) {
        if (scores[i] % 2 == 0)
            even[e++] = scores[i];
        else
            odd[o++] = scores[i];
    }
    printf("even scores ");
    for (int i = 0; i < e; i++)
        printf("%d ", even[i]);
    printf("\nOdd scores ");
    for (int i = 0; i < o; i++)
        printf("%d ", odd[i]);
    printf("\n");
    return 0;
}
