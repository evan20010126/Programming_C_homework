#include <stdio.h>

int main() {
    int num;
    while (scanf("%d", &num) != EOF) {
        int digit[8] = {0};
        int i = 0;
        int tmp;
        int count = 0;
        do {
            digit[i] = num % 2;
            num /= 2;
            tmp = digit[i];
            ++i;
            if (tmp == 1) {
                ++count;
            }
        } while (num > 0);
        if (count % 2 == 1) {
            printf("correct\n");
        } else {
            printf("erroneous\n");
        }
    }
    return 0;
}