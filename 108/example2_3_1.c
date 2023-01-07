#include <stdio.h>

int main()
{
    int times;
    int i;
    int input1, input2;
    char buf[100];
    scanf("%d", &times);

    for (i = 0; i < times; ++i)
    {
        scanf("%d %d", &input1, &input2);
        gets(buf);
        printf("%5d, %5d, %5d, %10.5lf\n", input1 + input2, input1 / input2, input1 % input2, (double)input1 / input2);
    }
    return 0;
}