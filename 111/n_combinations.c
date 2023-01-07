#include <stdio.h>

void comb(char ch_list[], int m, int n, int n_max, char record[]) {
    if (m == n || n == 0) {
        // when all need to choose || have choosed n
        int i;
        for (i = n_max - 1; i >= n; --i) {
            printf("%c", record[i]);
        }
        for (; i >= 0; --i) {
            printf("%c", ch_list[i]);
        }
        printf("\n");

        return;
    }

    // choose ch_list[m-1]
    record[n - 1] = ch_list[m - 1];
    comb(ch_list, m - 1, n - 1, n_max, record);

    // do not choose ch_list[m-1]  // note: will not infinite recursive, becasue it will run above "if" and return when m-1 == n
    comb(ch_list, m - 1, n, n_max, record);

    return;
}

int main() {
    int m, n;
    int i;
    char ch_list[10];
    char record[10];

    scanf("%d %d", &m, &n);
    for (i = 0; i < m; ++i) {
        scanf(" %c", &ch_list[m - 1 - i]);
    }

    comb(ch_list, m, n, n, record);

    return 0;
}