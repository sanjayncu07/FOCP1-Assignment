#include <stdio.h>

int main() {
    int x, y;
    printf("Enter coordinate x and y: ");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0)
        printf("Point (%d,%d) is in  first Quadrant\n", x, y);
    else if (x < 0 && y > 0)
        printf("Point (%d,%d) is in  Second Quadrant\n", x, y);
    else if (x < 0 && y < 0)
        printf("Point (%d,%d) is in  third Quadrant\n", x, y);
    else if (x > 0 && y < 0)
        printf("Point (%d,%d) is in fourth Quadrant\n", x, y);
    else if (x == 0 && y != 0)
        printf("Point lies on Y-axis\n");
    else if (y == 0 && x != 0)
        printf("Point lies on X-axis\n");
    else
        printf("Point is at the Origin\n");
    return 0;
}
