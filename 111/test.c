#include <stdio.h>

int main() {
    double precision;
    double U;
    double L;
    int k;

    /*U0*/
    // U = 4 - (4.0 / 3.0 - 4.0 / 5.0);
    // L = 4 - 4.0 / 3.0;01
    U = 4;
    L = 0;
    k = 0;
    scanf("%lf", &precision);
    while (U - L < precision) {
        U -= (4.0 / (4.0 * k + 3.0)) - (4.0 / (4.0 * k + 5.0));
        L += (4.0 / (4.0 * k + 1.0)) - (4.0 / (4.0 * k + 3.0));
        k++;
    }
    printf("%d", k);

    return 0;
}