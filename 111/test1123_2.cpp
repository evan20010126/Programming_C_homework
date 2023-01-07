#include <stdio.h>
#include <stdlib.h>
void memory_copy(void *dst, const void *src, unsigned num);
int compare(const void *a, const void *b);

void memory_copy(void *dst, const void *src, unsigned num) {
}

int compare(const void *a, const void *b) {
}

void insertion_sort(void *data, int n, int num, int (*cmp)(const void *, const void *)) {
    unsigned i;
    unsigned char *a;
    void *temp = (void *)malloc(num); /* allocate num bytes of memory space */
    for (i = 1; i < n; ++i) {
        memory_copy(temp, (unsigned char *)data + num * i, num);
        for (a = (unsigned char *)data + (i - 1) * num; a >= (unsigned char *)data; a -= num) {
            if (cmp(temp, a) < 0) {
                memory_copy(a + num, a, num); /* copy num bytes from a to a+num */
            } else {
                break;
            }
        }
        memory_copy(a + num, temp, num);
    }
    free(temp); /* release the allocated memory space */
    return;
}

int main() {
    int n, i;

    int *data;

    scanf("%d", &n);

    data = (int *)malloc(sizeof(int) * n);

    for (i = 0; i < n; ++i) {
        scanf("%d", data + i);
    }

    insertion_sort(data, n, sizeof(int), compare);

    for (i = 0; i < n; ++i) {
        printf("%d\n", data[i]);
    }

    free(data);

    return 0;
}
