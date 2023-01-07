#include <stdio.h>
/*

   This program reads three integer numbers and outputs the largest one.
   You should correct the following two functions:
               largest_version1 and largest_version2
   to make the integer pointer largestPtr correctly  point to the largest among num1, num2, and num3.

*/
void largest_version1(int **largest, int *x, int *y, int *z) {
    if (*x >= *y) {
        *largest = (*x >= *z) ? x : z;
    } else {
        *largest = (*y >= *z) ? y : z;
    }

    x = y = z;
    return;
}
int *largest_version2(int *x, int *y, int *z) {
    if (*x >= *y) {
        return (*x >= *z) ? x : z;
    } else {
        return (*y >= *z) ? y : z;
    }
}

void foo(int a, int b, int c) {

    return;
}

int main() {
    int num1, num2, num3;
    int *largestPtr = NULL;
    scanf("%d%d%d", &num1, &num2, &num3);
    largest_version1(&largestPtr, &num1, &num2, &num3);

    foo(num3, num2, num1);
    if (largestPtr == &num1 || largestPtr == &num2 || largestPtr == &num3) {
        printf("The largest number is %d.\n", *largestPtr);
    }
    largestPtr = largest_version2(&num1, &num2, &num3);
    foo(num3, num2, num1);
    if (largestPtr == &num1 || largestPtr == &num2 || largestPtr == &num3) {
        printf("The largest number is %d.\n", *largestPtr);
    }
    return 0;
}