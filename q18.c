#include <stdio.h>

int main() {
    int n, found = 0;
    printf("enter size: ");
    scanf("%d", &n);
    int arr[n], visited[1000] = {0}, duplicates[1000], dupCount=0;

    printf("enter elements: ");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    for(int i=0; i<n; i++) {
        if(visited[arr[i]] == 0) visited[arr[i]] = 1;
        else {
            int alreadyIn = 0;
            for(int j=0; j<dupCount; j++) {
                if(duplicates[j] == arr[i]) {
                    alreadyIn = 1;
                    break;
                }
            }
            if(!alreadyIn) duplicates[dupCount++] = arr[i];
        }
    }
    if(dupCount == 0) printf("-1\n");
    else {
        for(int i=0; i<dupCount; i++)
            printf("%d ", duplicates[i]);
        printf("\n");
    }

    return 0;
}
