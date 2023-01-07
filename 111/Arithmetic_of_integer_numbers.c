#include <math.h>
#include <stdio.h>

int max(int x, int y) {
    if (x >= y)
        return x;
    else
        return y;
}

int min(int x, int y) {
    if (x >= y)
        return y;
    else
        return x;
}

int main() {
    int x, y, z;
    int largest, smallest;
    int sum;
    scanf("%d %d %d", &x, &y, &z);
    largest = max(max(x, y), z);
    smallest = min(min(x, y), z);
    sum = x + y + z;
    printf("sum:%d\n", sum);
    printf("average:%d\n", sum / 3);
    printf("smallest:%d\n", smallest);
    printf("largest:%d\n", largest);

    return 0;
}