#include <math.h>
#include <stdio.h>

int main() {
    float u, v, a, b, c;
    scanf("%f %f %f %f %f", &u, &v, &a, &b, &c);
    printf("%.2f\n", fabs(a * u + b * v + c) / sqrt(a * a + b * b));
    return 0;
}