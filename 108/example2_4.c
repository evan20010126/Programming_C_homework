#include <stdio.h>

int main()
{
    int times;
    int input1, input2;

    while (scanf("%d %d", &input1, &input2) == 2)
    {
        if ((input1 == 0) && (input2 == 0))
            break;
        printf("%5d, %5d, %5d, %10.5lf\n", input1 + input2, input1 / input2, input1 % input2, (double)input1 / input2);
    }
    return 0;
}