#include <stdio.h>
struct point {
    float x, y;
};
struct rectangle {
    struct point leftbottom;
    float width, height;
};

int in_rectangle(struct point p, struct rectangle rec);
struct point input_point();
struct rectangle input_rectangle();

int main() {
    struct rectangle rect;
    struct point p;
    int n, i;

    rect = input_rectangle();
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        p = input_point();
        printf("point (%.2f,%.2f) %s in the rectangle\n", p.x, p.y, in_rectangle(p, rect) ? "is" : "is not");
    }
    return 0;
}

int in_rectangle(struct point p, struct rectangle rec) {
}

struct point input_point() {
    float x, y;
    scanf("%f %f", &x, &y);
    struct point tmp_point = {x, y};
    return tmp_point;
}
