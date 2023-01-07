#include <stdio.h>

int main() {
    int x;
    int i;
    int first;
    while (scanf("%d", &x) == 1) {
        first = 1;
        while (x > 0) {
            i = 1;
            while (x / (1000 * i) > 0) {  //小於時，i剛好
                i *= 1000;
            }
            if (first == 1) {
                printf("%03d", x / i);
                first = 0;
                x %= i;
            } else {
                printf(",%03d", x / i);
            }
        }
    }
    return 0;
}