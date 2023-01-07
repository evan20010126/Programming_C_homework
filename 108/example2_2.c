#include <stdio.h>
#include <math.h>

int main()
{
    double a, b;
    double answer1_x, answer2_x;
    double answer1_y, answer2_y;
    double A, B, C;
    FILE *fp = stdin;
    // fp = fopen("input.txt", "r"); // 開啟檔案
    fscanf(fp, "%lf %lf", &a, &b);
    fclose(fp);
    if (b != 0)
    {
        A = (4 * ((a / b) * (a / b)) + 1);
        B = -2 * 4 * ((a / b) * (a / b));
        C = 4 * ((a / b) * (a / b)) - 3;

        answer1_x = (-B + sqrt(B * B - 4 * A * C)) / (2 * A);
        answer2_x = (-B - sqrt(B * B - 4 * A * C)) / (2 * A);

        answer1_y = a * (answer1_x - 1) / b;
        answer2_y = a * (answer2_x - 1) / b;

        printf("(%.3lf,%.3lf), (%.3lf,%.3lf)\n", answer1_x, answer1_y, answer2_x, answer2_y);
    }
    return 0;
}

// a(x-1) - by = 0
// x = t
// y = a(t-1)/b

// x^2 + 4 * y^2 = 3

// t^2 + 4 * ((a/b)(t-1))^2 = 3

// t^2 + 4 * ((a/b)^2 * (t^2 - 2t + 1)) = 3

// t^2 + 4((a/b)^2) * (t^2 - 2t + 1) = 3

// (4((a/b)^2) + 1)t^2 - 2 * 4((a/b)^2)t + 4((a/b)^2)-3 = 0

// 4((a/b)^2)+(1/4) * 4t^2 - 8t + 1 = 0

// 8 +- sqrt(64-4 * 4((a/b)^2)+1/4 * 4 * 1)
// ________________________
//  2 (4((a/b)^2)+1/4 * 4)
